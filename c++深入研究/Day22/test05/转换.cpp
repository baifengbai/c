#include<iostream>

class  fushu
{
public:
	explicit  fushu(int num)//避免隐式转换，引发歧义
	{
		x = num;
		y = num;

	}
	void print()
	{
		std::cout << x << "+" << y << "i" << std::endl;
	}
	operator int();
	//不支持友元，仅仅支持成员函数
	 operator double()
	{
		 return (double)(x + y);
	}
	
protected:
private:
	int x;
	int y;
};
fushu::operator int()//类类之间的转换函数
{
	return x *y;
}

//转换有赋值，（）构造


void main3()
{
	int num(100.9);
	fushu fushu1(num);//构造函数
	fushu1.print();
	int data = (int)fushu1 + 10;//类型转换可以把一个自定义类型当作基本数据类型来计算
	std::cout << data << std::endl;

	std::cin.get();



}

void main2()
{
	int num ( 100.9);
	fushu fushu1(num);//构造函数
	fushu1.print();

	//int data (fushu1);//转换函数，显示调用，int(a),(int)a,a.operator int ()
	//int data = fushu1;//此处实现的是fushu1里的int()，注意此处是隐式调用
	//int data = (int)fushu1;同上
	//int data = int (fushu1);同上
	//int data ( int(fushu1));先调用类类转换，再调用构造
	//std::cout << data << std::endl;
	std::cin.get();

}

void main1()
{
	 int num (10.8);//基本数据类型 
	//隐式转换与显式转换，是否带有类型转换符

	//fushu fushu1 = (fushu)10.8;
	//fushu fushu1 = static_cast<fushu>(10.8);

	fushu fushu1 =(fushu)10;//构造函数
	//int  numA = fushu1;
	fushu1.print();
	std::cin.get();



}