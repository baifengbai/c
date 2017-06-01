#include<iostream>
using namespace::std;
class A{
	public:
	A() 
	{
		cout<<"A is created"<<endl;			
	}
	
	~A()
	{
	
		cout<<"A is destroyed"<<endl;	
	}
};

class B{
	public:
	B() 
	{
		cout<<"B is created"<<endl;			
	}
	
	~B()
	{
	
		cout<<"B is destroyed"<<endl;	
	}
};

A globalA;
B globalB;

void foo()
{
	cout<<"foo is begin"<<endl;
	A a;
	static B b;
	cout<<"foo is end"<<endl;
}

int main()
{
	cout<<"main is begin"<<endl;
	foo();
	foo();
	cout<<"main is end"<<endl;
}
