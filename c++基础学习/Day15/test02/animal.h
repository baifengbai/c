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
	//不加const其实就是隐含了makesoud会对类进行修改，加入对象是const型，调用makesoud就还会报错
	//注意virtual，与test01区别在此,如果在其他文件中实现makesoud，则不需要加virtual，只需要在定义时声明即可
	virtual void makesoud() const
	{
		cout<<"Animal makesoul"<<endl;
	}
	private:
		int a;
};

class Dog :public Animal{
	public:
	Dog()
	{
		cout<<"Dog"<<endl;
	}
	~Dog()
	{

	}

	void makesoud() const
	{
		cout<<"Dog makesoul"<<endl;
	}
};
class Cat :public Animal{
	public:
	Cat()
	{
		cout<<"Cat"<<endl;
	}
	~Cat()
	{

	}

	void makesoud() const
	{
		cout<<"Cat makesoul"<<endl;
	}
};



#endif
