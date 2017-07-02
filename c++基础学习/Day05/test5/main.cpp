#include<iostream>
#include"student.h"
using namespace::std;

void fun(student std)
{	
	cout<<std.getId()<<endl;
}


int main(int argc,char*argv[])
{
	student student(5);
	cout<<student.getId()<<endl;
	//将整数进行隐式类型转换，即int变成student，可以使用explicit关键字禁止隐式类型转换
	fun(6);
	return 0;
}
