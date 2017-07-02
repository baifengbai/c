#include"animal.h"
#include<string>
#include<iostream>
using namespace::std;

namespace QiuAnimal {
	Animal::Animal():name1("name1"),name2("name2")
	{
		cout<<"Animal"<<endl;
	}	
	Animal::~Animal()
	{
		cout<<"~Animal"<<endl;
	}
	void Animal::eat()
	{
		cout<<"eat"<<endl;
	}
	Cat::Cat():name3("name3")
	{
		cout<<"Cat"<<endl;
	}
	Cat::~Cat()
	{
		cout<<"~Cat"<<endl;
	}
	void Cat::run()
	{
		cout<<"run"<<endl;
	}		
}
