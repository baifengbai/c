
#include"increase.h"
#include<iostream>
using namespace::std;


Increase::Increase(int val):val(val)
{
	cout<<"Increase"<<endl;
}
Increase::~Increase()
{
	cout<<"~Increase"<<endl;
}

Increase& operator++(Increase&b)
{
	b.val++;
	return b;//返回原对象
}

Increase operator++(Increase&b,int a)
{
	Increase ret(b);//通过拷贝构造函数来保持原来对象的值。

	b.val++;

	return ret;
}

