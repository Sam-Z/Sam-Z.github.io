#matplotlib官方手册学习笔记

## matplotlib.pyplot 简介
matplotlib.pyplot 中的函数采用matlab绘图命令的风格。其中的命令多针对一个绘图操作，例如:创建一个图像，创建一个绘图区域，在绘图区域绘制线条，
装饰线条，装饰坐标轴。
最小绘图程序如下
```
import matplotlib.pyplot as plt
y = [1,2,3,4]
plt.plot(y)
plt.ylabel('some numbers')
plt.show()
```
疑问：调用plot函数只传入了一个序列，它是怎么完成绘图的呢？答案：如果给plot传入一个序列，它认为你传入的是y轴，它自动添加x轴，完成绘图。

当然可以指定x轴
```
import matplotlib.pyplot as plt
x = [0.1, 0.2, 0.3, 0.4]
y = [1,2,3,4]
plt.plot(x,y)
plt.ylabel('some numbers')
plt.show()
```
总结：使用matplot绘图的一般步骤
1）准备数据
2）调用绘图命令
3）装饰绘图
4）显示绘图

##修改绘图线型
前两个例子
