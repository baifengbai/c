
#include"increase.h"
#include<iostream>
using namespace::std;


Increase::Increase(int val):val(val)
{
	cout<<"Increase"<<endl;
}
Increase::~Increase()
{
	cout<<"~Increase"<<endl;
}

Increase& Increase::operator++()
{
	val++;
	return *this;
}

Increase Increase::operator++(int a)
{
	Increase ret(*this);

	val++;

	return ret;
}

