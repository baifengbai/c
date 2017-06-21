#include"student.h"
#include<iostream>

using namespace::std;
//定义m_id为id
student::student(int id):m_id(id)
{

}

student::~student()
{
	cout<<"destructor function"<<endl;
}
