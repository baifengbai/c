#ifndef _TEMP_H_
#define _TEMP_H_
#include<iostream>
using namespace::std;

namespace Qiu {
class Test {
	public:
		Test(){}
	/*
	private:
		Test(const Test&){}
		Test&operator=(const Test&){}
	*/
};

template <typename T>

class Example {
	public:
	Example(T val):m_val(val)
	{
		cout<<"Example"<<endl;
	}
	T get()
	{
		return m_val; 
	}
	private:
	T m_val;

};

}
#endif
