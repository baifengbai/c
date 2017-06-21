#include"animal.h"
#include<iostream>

using namespace::std;
using namespace::QiuAnimal;

void fun(const Animal&other)
{
	other.eat();
}

int main()
{
	Cat cat();
	//会报错，因为eat()在子类中是private
	fun(cat);	
	return 0;
}
