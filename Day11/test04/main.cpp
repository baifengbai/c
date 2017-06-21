#include"increase.h"
#include<iostream>
using namespace::std;


int main()
{
	Increase val(1);
	
	Increase val2 = ++val;

	cout<<val.getVal()<<endl;
	cout<<val2.getVal()<<endl;

	cout<<endl;		

	Increase val3 = val++;

	cout<<val.getVal()<<endl;
	cout<<val3.getVal()<<endl;
	return 0;
}
