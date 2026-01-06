**VDu**

使用qt-mvvm 框架（https://github.com/gpospelov/qt-mvvm）+ QT5设计器

设计 RobotControl 的软件界面和相关逻辑，同时设计一个 dialog 界面，可以用于显示其他信息

代码位于：examples/robotcontrol/ 中

编译命令如下：

```
mkdir build && cd build
cmake ..
make -j8
sudo make install
cd ../examples/robotcontrol/
mkdir build && cd build
cmake ..
make -j8
./RobotControlMVVM  # 程序运行
```



