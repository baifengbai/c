#include<iostream>
using namespace::std;

class A{
	public:
		A()
		{
			cout<<"A is created"<<endl;
		}
		//拷贝构造函数
		A(const A& a)
		{
			cout<<"A is created with copy"<<endl;
		}
		~A()
		{
			cout<<"A is destroyed"<<endl;

		}
};

//入参会调用拷贝构造函数
A* foo(A a)
{
	cout<<"foo function"<<endl;

	A *p=new A();

	return p;
}

A* bar(const A& a)
{
	cout<<"bar function"<<endl;

	A *p=new A();

	return p;
}



int main()
{
	A c;
	A*p= NULL;

	p=foo(c);
	
	delete p;
	p = NULL;

	p = bar(c);
	delete p;
	p = NULL;
	return 0;
}
