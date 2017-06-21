#include"animal.h"
#include<string>
#include<iostream>
using namespace::std;

namespace QiuAnimal {
	Animal::Animal(int age,string location):m_age(age),m_location(location)
	{
		cout<<"Animal"<<endl;
	}
	Animal::~Animal()
	{
		cout<<"~Animal"<<endl;
	}
	void Animal::SetAge(int age)
	{
		m_age = age;
	}	
	int Animal::GetAge() const
	{
		return m_age;
	}
	void Animal::SetLocation(string location)
	{
		m_location = location;
	}
	
	void Animal::GetLocation()
	{
		cout<<"location is "<<m_location<<endl;
	}
	
	Cat::Cat(int age,int color,string location):Animal(age,location),m_color(color)
	{
		cout<<"Cat"<<endl;
	}
	Cat::~Cat()
	{
		cout<<"~Cat"<<endl;
	}	
	void Cat::SetColor(int color)
	{
		m_color = color;
	}
	int Cat::GetColor()
	{
		return m_color;
	}
	//如何访问父类的protect
	void Cat::SetLocation(string location)
	{
		//继续调用父类的函数,直接调用是错误的，需要间接通过Animal::SetLocation(location);
		Animal::SetLocation(location);
		//如果访问父类的private是不行的
		//error:Animal::m_age = 1;
	}
	void Cat::GetLocation()
	{
		Animal::GetLocation();
	}
}
