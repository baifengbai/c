#include<iostream>
using namespace::std;

void foo(int i,int j=4,int k =5)
{
	cout<<i*j*k<<endl;
}

int main(int argc,char *argv[])
{
	foo(1);
	foo(1,8);	
	return 0;
}


