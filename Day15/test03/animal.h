#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include<iostream>

using namespace::std;

class Animal {
	public:
	Animal()
	{
		cout<<"Animal"<<endl;
	}
	~Animal()
	{

	}
	//加=0表明是纯虚函数，由此变成了抽象类
	virtual void makesoud() const = 0;

	private:
		int a;
};


#endif
