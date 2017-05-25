//函数的重载:函数名字一样，但是形参或数据类型不同，编译器会根据参数的类型与个数
//自动确定调用那一个函数，这就是函数的重载
//函数的重载不以返回值进行区分

#include<iostream>
using namespace::std;

int foo(int a)
{
	cout<<__FILE__<<":"<<__LINE__<<":"<<__func__<<endl;
	return a*a;
}

float foo(float a)
{
	cout<<__FILE__<<":"<<__LINE__<<":"<<__func__<<endl;
	return a*a;
}

double foo(double a)
{
	cout<<__FILE__<<":"<<__LINE__<<":"<<__func__<<endl;
	return a*a;
}

int main()
{
	cout<<"foo(5):"<<foo(5)<<endl;
	cout<<"foo(5.5f):"<<foo(5.5f)<<endl;
	cout<<"foo(5.1):"<<foo(5.1)<<endl;	
	return 0;
}

