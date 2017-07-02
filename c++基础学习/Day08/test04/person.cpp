#include"person.h"
#include<iostream>
#include<cstring>
using namespace::std;

Person::Person(char *pN)
{
	int len = 0;

	if (NULL != pN)
	{
		cout<<"Construct "<<pN<<endl;
		len = strlen(pN)+1;
		name=new char[len];
		cout<<"name = "<<static_cast<void*>(name)<<endl;
		memset(name,0,len);		
		strcpy(name,pN);		
	}
	else
	{
		name = NULL;
	}
}
Person::~Person()
{
	cout<<"Destructing Person"<<endl;
	
	if(NULL!=name)
	{
		Print();
		delete[] name;
		name = NULL;
	}

}
void Person::Print()
{
	cout<<"name = "<<static_cast<void*>(name)<<endl;
}

Person::Person(const Person &p)
{
	int len = 0;
	if(NULL != p.name)
	{
		cout<<"Construct with copy: "<<p.name<<endl;
		len = strlen(p.name)+1;
		name=new char[len];
		cout<<"name = "<<static_cast<void*>(name)<<endl;
		memset(name,0,len);		
		strcpy(name,p.name);
	}
	else
	{
		name = NULL;
	}
}

//赋值运算符：注意区别int a = b
Person& Person::operator =(const Person &other)
{
	int len = 0;
	cout<<"operator = "<<endl;	

	//排除a=a的情况
	if(this==&other)
	{
		return *this;
	}
	
	if(name != NULL)
	{
		delete[] name;
		name = NULL;
	}
	
	if(NULL != other.name)
	{
		len = strlen(other.name)+1;
		name=new char[len];
		cout<<"name = "<<static_cast<void*>(name)<<endl;
		memset(name,0,len);		
		strcpy(name,other.name);
	}
	else
	{
		name = NULL;
	}	
	return *this;
}
