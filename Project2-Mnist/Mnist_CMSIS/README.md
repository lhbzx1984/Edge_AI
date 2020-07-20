## 1 实验步骤

1. 保存权重文件
2. 调用 CMSIS 库, 复现神经网络, 文件为`.c` 类文件
3. 导入权重文件和测试样例
4. 推理成功

## 2 保存权重文件并读取

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

## 3 网络重构

通过调用CMSIS API, 实现网络重构, 此步骤需要一定的深度学习基础,

感兴趣的可以阅读源文件

- [./Mnist_CMSIS/applications/main.c](./Mnist_CMSIS/applications/main.c)
- [./Mnist_CMSIS/applications/mnist_parameters.h](./Mnist_CMSIS/applications/mnist_parameters.h)

其他文件并无做任何改动

## 4 编译 & 烧录

- Windows 

  MDK 一键编译一键烧录, 时间略久, 通过 Putty 观察输出情况

- Linux

  `scons` 编译, 通过`STM32 Cube Programmer` 烧录, `minicom` 观察输出情况

---

> CMSIS + RTT 推理成功界面

![](https://gitee.com/lebhoryi/PicGoPictureBed/raw/master/img/20200719151207.png)
