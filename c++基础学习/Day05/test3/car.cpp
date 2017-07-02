#include"car.h"
#include<iostream>

using namespace::std;

void car::run()
{
	cout<<"car run"<<endl;
}

void car::stop()
{
	cout<<"car stop"<<endl;
}

void car::setProperty(int price,int CarNum)
{
	m_price  = price;//也可以写成this->m_price  = price;
	m_carnum = CarNum;
}
void car::print()
{
	cout<<"In"<<__func__<<"this address is"<<this<<endl;
}
