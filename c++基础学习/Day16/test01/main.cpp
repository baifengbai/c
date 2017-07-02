#include"temp.h"
#include<iostream>
using namespace::std;
using namespace::Qiu;

int main()
{
	Example<int> val(1);
	cout<<val.get()<<endl;
	Test test;
	//会调用拷贝构造函数，但是由于是私有的，会报错
	Example<Test> val3(test);
}
