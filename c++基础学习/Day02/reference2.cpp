#include<iostream>

using namespace::std;

void fun1(int val)
{
	val = 10;
}

void fun2(int& val)
{
	val = 20;
}

void fun3(int* pval)
{
	*pval = 30;
}

int main(int argc,char*argv[])
{
	int a=1;
	int b=1;
	int c=1;
	
	fun1(a);
	fun2(b);
	fun3(&c);
	cout<<"a:"<<a<<",b:"<<b<<",c:"<<c<<endl;
	return 0;
}
