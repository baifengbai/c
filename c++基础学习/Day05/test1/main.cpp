//泛型编程:独立于任何特定类型的方式编写代码
//模板是范型编程的基础，STL是标准的模板库，分为类的模板和函数的模板
//求绝对值

#include<iostream>
using namespace::std;

template <typename T> 

T abs(T x)
{
	return x<0?-x:x;

}
int main(int argc,char *argv[])
{
	int a = -5;
	double b = 6.5;	
	cout<<abs(a)<<endl;
	cout<<abs(b)<<endl;
	return 0;

}

