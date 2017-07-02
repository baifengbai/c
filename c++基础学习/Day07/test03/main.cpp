#include<iostream>
#include"martin.h"

using namespace std;

void fun()
{
	martin c;
		
	cout<<"num is : "<<c.getCout()<<endl;	

}

int main(int argc,char*argv[])
{
	cout<<"num is : "<<martin::getCout()<<endl;

	martin a;
		
	cout<<"num is : "<<a.getCout()<<endl;

	fun();

	martin b;
		
	cout<<"num is : "<<b.getCout()<<endl;
	

}
