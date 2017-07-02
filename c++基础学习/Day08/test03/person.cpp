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

