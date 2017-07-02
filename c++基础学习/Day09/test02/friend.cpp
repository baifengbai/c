#include<iostream>

using namespace::std;

//前置声明
class X;

class Y{
	public:
		void f(X*);
		//如果是void b(X)则会保持，因为X的内容不完整，但是指针没事。

	private:
		X* pX;
};


class X{
	public:
		void initialize();
		friend void g(X*,int);//Global friend
		friend void Y::f(X*);//class member friend
		friend class Z;//Entire class is a friend,Z的成员函数均可访问
		friend void h();
		void print()
		{
			cout<<"i: "<<i<<endl;
		}
	private:
		int i;
};

void X::initialize()
{
	i = 0;
}

void g(X*x,int i)
{
	x->i=i;
}

void Y::f(X*x)
{
	x->i=47;
}


class Z {
	public:
		void initialize();
		void g(X *x);
	private:
		int j;
};

void Z::initialize()
{
	j=99;
}
void Z::g(X*x)
{
	x->i +=j;
}

void h() {
	X x;
	x.i = 100;
}

int main()
{
	X x;
	x.initialize();
	Z z;
	z.initialize();
	z.g(&x);

	x.print();
	return 0;
}






