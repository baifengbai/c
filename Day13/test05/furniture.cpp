#include"furniture.h"
#include<iostream>
using namespace::std;

sofa::sofa(int weight):furniture(weight)
{
	cout<<"sofa"<<endl;	
}

bed::bed(int weight):furniture(weight)
{
	cout<<"bed"<<endl;	
}
//差别
SofaBed::SofaBed(int weight):furniture(weight)
{
	cout<<"SofaBed"<<endl;
}

furniture::furniture(int weight):m_weight(weight)
{
	cout<<"furniture"<<endl;
}










