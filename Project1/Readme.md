> - File: 初使用STM32CubeMX 烧录AI极简model
> - Tips: 没有图片的文章都是耍流氓，本文填充了大量的截图
> - Author: lebhoryi@rt-thread.com
> - Date: 2020/07/02

[TOC]

# 0x00 嵌入式关联AI

`AI落地`一直是一个很红火的前景和朝阳行业。

关于任何嵌入式和AI相关的都是想尝一尝。

此篇文章就是关于`STM32CubeMX` 初体验的一篇文章。

> STM32CubeMX是ST公司推出的一种自动创建单片机工程及初始化代码的工具，适用于旗下所有STM32系列产品。

# 0x01 准备工作

## 1.1 安装三个软件包

> 操作系统是ubuntu 18.04， 安装过程很是简单，网上都有很成熟的教程，在此不赘述

- STM32CubeMx

- STM32CubeProgrammer

  > 安装好之后，在终端执行安装包路径下的`bin` 文件夹下的`` ， 会报`**错误：找不到或无法加载主类 com.st.app.Main**`，这时候只要将 ubuntu 默认的Open-JDK 换成Oracle JDK就好了，下面是切换成Oracle JDK 成功的截图
  >
  > ```shell
  > #　Oracle 官网中下载JavaSE JDK 压缩包
  > $ sudo tar zxvf jdk-8u172-linux-x64.tar.gz -C /usr/lib/jvm
  > # 将下载的JDK注册到系统中
  > $ sudo update-alternatives --install /usr/bin/java java /usr/lib/jvm/jdk1.8.0_172/bin/java 300
  > # 切换JDK
  > $ sudo update-alternatives --config java
  > # 查看JDK 版本
  > $ java -version
  > ```

  ![NO9x8x.png](https://s1.ax1x.com/2020/07/03/NO9x8x.png)

- STM32CubeIDE

## 1.2 PC端搭建一个极简网络

在此处，我选择了最简单的一个项目 - [Linear Regression](https://github.com/Lebhoryi/Edge_AI/blob/master/Project1/tf2_linear_regression.ipynb)

- `tf2_linear_regression.ipynb` 内涵三种不同方式搭建网络结构
- `tf2_线性回归_扩展.ipynb` 内涵不同方式训练模型

其中，在模型搭建的时候，重新温习了一下，有三种方式：

- Sequence
- 函数式API
- 子类

其中，三种方式的优缺点在这篇[博客](https://blog.csdn.net/weixin_42264234/article/details/103946960)中已经详细阐述。

在后期将PC端上的模型导入到CubeMx中，生成的时候出现了一点问题：

```shell
INVALID MODEL: Couldn't load Keras model /home/lebhoryi/RT-Thread/Edge_AI/Project1/keras_model.h5, 
error: Unknown layer: Functional
```

暂时的解决方式是采用`Sequence` 搭建网络

训练好的Model：[keras_model.h5](./model/keras_model.h5)

网络结构模型如下：

<a href="https://imgchr.com/i/NOeFZ6"><img src="https://s1.ax1x.com/2020/07/03/NOeFZ6.png" alt="NOeFZ6.png" border="0" /></a>

# 0x02 使用CubeMx

在此处，我选择的是`STM32H743ZIT6U`

![STM32H743](./image/STM32H743.jpg)

## 2.1 打开CubeMx & 选择 H743ZI

<a href="https://imgchr.com/i/NOZzRJ"><img src="https://s1.ax1x.com/2020/07/03/NOZzRJ.png" alt="NOZzRJ.png" border="0" /></a>

<a href="https://imgchr.com/i/NOZXIU"><img src="https://s1.ax1x.com/2020/07/03/NOZXIU.png" alt="NOZXIU.png" border="0" /></a>

## 2.2 导入软件包

打开菜单栏中的Help，选择Embedded Software Packages Manager

选择 STMicroelectronics，选择 X-CUBE-AI，选择版本，安装好之后选择右下角的Close

<a href="https://imgchr.com/i/NOetzj"><img src="https://s1.ax1x.com/2020/07/03/NOetzj.png" alt="NOetzj.png" border="0" /></a>

导入下载好的包

<a href="https://imgchr.com/i/NOm9fg"><img src="https://s1.ax1x.com/2020/07/03/NOm9fg.png" alt="NOm9fg.png" border="0" /></a>

会出现如下界面

<a href="https://imgchr.com/i/NOmMp4"><img src="https://s1.ax1x.com/2020/07/03/NOmMp4.png" alt="NOmMp4.png" border="0" /></a>

选择串口通信

<a href="https://imgchr.com/i/NOnEgH"><img src="https://s1.ax1x.com/2020/07/03/NOnEgH.png" alt="NOnEgH.png" border="0" /></a>

## 2.3 导入PC端训练好的模型

<a href="https://imgchr.com/i/NOnpHx"><img src="https://s1.ax1x.com/2020/07/03/NOnpHx.png" alt="NOnpHx.png" border="0" /></a>

分析model 能否烧录，我的模型比较简单，分析起来也就比较快

<a href="https://imgchr.com/i/NOn38g"><img src="https://s1.ax1x.com/2020/07/03/NOn38g.png" alt="NOn38g.png" border="0" /></a>

验证工程文件，我的系统是ubuntu 18.04，不支持MDK，所以我选择的是STM32CubeIDE

<a href="https://imgchr.com/i/NOnsxJ"><img src="https://s1.ax1x.com/2020/07/03/NOnsxJ.png" alt="NOnsxJ.png" border="0" /></a>

验证成功界面

<a href="https://imgchr.com/i/NOuPLn"><img src="https://s1.ax1x.com/2020/07/03/NOuPLn.png" alt="NOuPLn.png" border="0" /></a>

## 2.4生成项目工程

<a href="https://imgchr.com/i/NOM5GT"><img src="https://s1.ax1x.com/2020/07/03/NOM5GT.png" alt="NOM5GT.png" border="0" /></a>

文件夹树如下：

```shell
(base) #( 07/03/20@10:51上午 )( lebhoryi@RT-AI ):~/RT-Thread/Edge_AI@master✗✗✗
   tree -L 2 ./Project1 
./Project1
├── DNN  # CubeMX 生成工程路径
│   ├── DNN.ioc  # CubeIDE 类型文件
│   ├── Drivers
│   ├── Inc
│   ├── Middlewares
│   ├── network_generate_report.txt
│   ├── Src
│   ├── Startup
│   ├── STM32CubeIDE
│   ├── STM32H743ZITX_FLASH.ld
│   └── STM32H743ZITX_RAM.ld
├── image  # 相关图片保存文件夹
│   ├── mymodel1.png   # model
│   └── STM32H743.jpg  # H743
├── model  # model 保存路径
│   └── keras_model.h5
├── Readme.md
├── tf2_linear_regression.ipynb
└── tf2_线性回归_扩展.ipynb
```

至此，神功练成了一大半，剩下的就是代码调试的工作了

# 0x03 代码调试

> 关于STM32CubeIDE 的初步认识：[基础说明与开发流程](https://blog.csdn.net/Naisu_kun/article/details/95935283)

## 3.1 导入工程

File 选项 --> import

<a href="https://imgchr.com/i/NOjwJf"><img src="https://s1.ax1x.com/2020/07/03/NOjwJf.png" alt="NOjwJf.png" border="0" /></a>

<a href="https://imgchr.com/i/NOjFRU"><img src="https://s1.ax1x.com/2020/07/03/NOjFRU.png" alt="NOjFRU.png" border="0" /></a>

导入成功的界面：

<a href="https://imgchr.com/i/NOjgwn"><img src="https://s1.ax1x.com/2020/07/03/NOjgwn.png" alt="NOjgwn.png" border="0" /></a>

## 3.2 生成`.bin` 文件

<a href="https://imgchr.com/i/NOvQ7n"><img src="https://s1.ax1x.com/2020/07/03/NOvQ7n.png" alt="NOvQ7n.png" border="0" /></a>

## 3.3 烧录`.bin` 文件

打开`STM32CubeProgramming`，点击右上角`connect`，然后选择`Open file`，选择要打开的`.bin` 文件

<a href="https://imgchr.com/i/NOxsVs"><img src="https://s1.ax1x.com/2020/07/03/NOxsVs.png" alt="NOxsVs.png" border="0" /></a></a>

烧录成功的界面：

<a href="https://imgchr.com/i/NOxWxU"><img src="https://s1.ax1x.com/2020/07/03/NOxWxU.png" alt="NOxWxU.png" border="0" /></a>

## 3.4 other

在串口中实时显示，有`minicom` 和`cutecom`两种工具

下面是`cutecom` 的截图

> cutecom 和 上面的programming 有且仅有一个connect

<a href="https://imgchr.com/i/NOzlWV"><img src="https://s1.ax1x.com/2020/07/03/NOzlWV.png" alt="NOzlWV.png" border="0" /></a>

# 0x04 参考文章

- [STM32CubeMX系列教程](https://www.strongerhuang.com/categories/STM32CubeMX系列教程/)
- [Tensorflow 2.0 中模型构建的三种方式](https://blog.csdn.net/weixin_42264234/article/details/103946960)
- [Ubuntu16.04 和 Ubuntu18.04 安装 STM32CubeProgrammer 遇到的坑](https://blog.csdn.net/lu_embedded/article/details/103032083)
- [基础说明与开发流程](https://blog.csdn.net/Naisu_kun/article/details/95935283)

