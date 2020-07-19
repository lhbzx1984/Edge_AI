[TOC]


# 0x00 前言

在 H743 + RT - Thread 上实现MNIST推理

两种方法:

- [ ] STM32Cube AI + RTT

- [x] CMSIS + RTT

# 0x01 文件树

```shell
/home/lebhoryi/RT-Thread/Edge_AI [git::master *] [lebhoryi@RT-AI] [15:12]
> tree -L 1 ./Project2-Mnist 
./Project2-Mnist
├── cpp_pytorch_mnist  # pytorch cpp 实现 mnist 训练 (Doing)
├── data  # mnist 数据集
├── image  # 自定义测试集
├── Mnist  # STM32Cube AI 工程 | linux
├── Mnist_CMSIS  # CMSIS + RTT | LInux
├── mnist.ipynb  # 模型训练及验证
├── mnist_with_cube  # STM32Cube AI + RTT + Mnist (Doing)
├── model  # 模型储存
└── readme.md
```

# 0x02 PC 训练 Model

## 2.1 PC 端环境

- Tensorflow: 2.3.0-dev20200515
- Numpy: 1.16.4
- Keras: 2.2.4-tf

## 2.2 数据集

> File: ./data/mnist.npz

MNIST 数据集由 60000 (训练集) + 10000(测试集) 手写字符组成, 每张图片的大小为 $ 28 * 28 $, 数据集手动下载地址 [http://yann.lecun.com/exdb/mnist/](http://yann.lecun.com/exdb/mnist/) .

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719132029.png)

## 2.3 网络结构

- 两层卷积 + 一层全连接层

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719132529.png)

## 2.4 训练模型 & 验证模型

> File: ./model/mnist.h5

- 训练模型

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719133308.png)

- 验证训练模型的准确率

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719132812.png)

- 保存权重文件

```python
# save weights
model.save_weights(model_path / 'model_weights.h5')

# load weights
model.load_weights(model_path / 'model_weights.h5')

model.compile(optimizer='adam',
             loss='sparse_categorical_crossentropy',
             metrics=['accuracy',])
loss, acc = model.evaluate(x_test, y_test)
print("Restored model, accuracy: {:5.2f}%".format(100*acc))
```

```shell
313/313 [==============================] - 1s 2ms/step - loss: 0.1226 - accuracy: 0.9651
Restored model, accuracy: 96.51%
```

# 0x03 STM32Cube AI + RTT

## 3.1 生成项目工程

参考之前的Project1, 输入训练好的`.h5` 模型, 利用`STM32Cube MX` 生成项目工程.

## 3.2 自定义测试集测试

> 代码更改之处或者说参考之处: [./Mnist/aiSystemPerformance.c](./Mnist/aiSystemPerformance.c)

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719151936.png)



## 3.3 RTT 上执行 Mnist 推理

占个坑....

# 0x04 CMSIS + RTT

> CMSIS + RTT 推理成功界面

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719151207.png)

最终的目标是将训练好的 Model 在 RT-Thread 系统上能够推理(测试)成功, 需要借助 CMSIS-NN 库.

## 4.1 实验步骤

1. 保存权重文件
2. 调用 CMSIS 库, 复现神经网络, 文件为`.c` 类文件
3. 导入权重文件和测试样例
4. 推理成功

## 4.2 保存权重文件并读取

- 权重文件保存 & 验证

  ```python
  # save weights
  model.save_weights(model_path / 'model_weights.h5')
  
  # load weights
  model.load_weights(model_path / 'model_weights.h5')
  
  model.compile(optimizer='adam',
               loss='sparse_categorical_crossentropy',
               metrics=['accuracy',])
  loss, acc = model.evaluate(x_test, y_test)
  print("Restored model, accuracy: {:5.2f}%".format(100*acc))
  ```

  ```shel
  313/313 [==============================] - 1s 2ms/step - loss: 0.1226 - accuracy: 0.9651
  Restored model, accuracy: 96.51%
  ```

- 权重文件读取

  ```python
  # 读取权重 h5 文件
  import h5py
  
  weights_file = model_path / 'model_weights.h5'
  weights_txt = model_path / 'model_weights_int.txt'
  
  def traverse_datasets(hdf_file):
      def h5py_dataset_iterator(g, prefix=''):
          for key in g.keys():
              item = g[key]
              path = f'{prefix}/{key}'
              if isinstance(item, h5py.Dataset): # test for dataset
                  yield (path, item)
              elif isinstance(item, h5py.Group): # test for group (go down)
                  yield from h5py_dataset_iterator(item, path)
  
      for path, _ in h5py_dataset_iterator(hdf_file):
          yield path
          
  h5_f = h5py.File(weights_file, 'r')
  with open(weights_txt, 'w+') as f:
      for dset in traverse_datasets(h5_f):
          weight = h5_f[dset].value * 2**7
          weight = weight.flatten()
          weight = weight.astype(np.int32)
          f.write(h5_f[dset].name + " : ")
          f.write(str(weight.tolist()))
          f.write('\n\n')
          
  h5_f.close()
  ```

## 4.3 网络重构

通过调用CMSIS API, 实现网络重构, 此步骤需要一定的深度学习基础,

感兴趣的可以阅读源文件

- [./Mnist_CMSIS/applications/main.c](./Mnist_CMSIS/applications/main.c)
- [./Mnist_CMSIS/applications/mnist_parameters.h](./Mnist_CMSIS/applications/mnist_parameters.h)

其他文件并无做任何改动

## 4.4 编译 & 烧录

- Windows 

  MDK 一键编译一键烧录, 时间略久, 通过 Putty 观察输出情况

- Linux

  `scons` 编译, 通过`STM32 Cube Programmer` 烧录, `minicom` 观察输出情况

# 0x05 问题收集:

## 5.1 CMSIS + RTT 找不到 `arm_math.h`

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200716155857.png)

- windows: 

  1. 勾选DSP 开关

  ![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719153357.png)

  2. 增加宏定义 

     `USE_STDPERIPH_DRIVER,ARM_MATH_CM4,__CC_ARM,__FPU_PRESENT, ARM_MATH_DSP`

  ![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719153523.png)

- linux 

  待补充

