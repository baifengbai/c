#创建一个空的类，编译器会为我们创建：构造函数，析构函数，拷贝构造函数，赋值运算符

何时需要定义拷贝构造函数
1.类数据成员有指针（此时也需要定义赋值运算符）

2.类数据成员管理资源（如打开一个文件）

3.一个类需要析构函数来释放资源

如果想禁止一个类的拷贝构造，需要将拷贝构造函数申明为private

在C++中，下面三种对象需要调用拷贝构造函数（有时也称“复制构造函数”）：
1) 一个对象作为函数参数，以值传递的方式传入函数体；
2) 一个对象作为函数返回值，以值传递的方式从函数返回；
3) 一个对象用于给另外一个对象进行初始化（常称为赋值初始化）；
