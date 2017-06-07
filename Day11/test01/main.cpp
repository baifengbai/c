#include"rmb.h"
#include<iostream>

using namespace::std;


int main()
{
	RMB a(10,5);
	RMB b(20,3);

	if(b>a)
	{
		cout<<"b > a"<<endl;
	}
	
	a=a+b;
	a.display();

}
