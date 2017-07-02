#include"animal.h"

void fun(const Animal& other)
{
	other.makesoud();
}

void fun2(const Animal* pother)
{
	pother->makesoud();
}
void fun3(const Animal other)
{
	other.makesoud();
}

int main()
{
	//基类的指针，指向子类的对象
	Animal *pAnimal = new Cat;

	pAnimal->makesoud();

	//通过delete基类的指针，释放子类对象,但是如果基类的析构函数没有申明为虚类，则子类的析构函数不会被调用，有内存泄漏的隐患。
	delete pAnimal;
	return 0;
}
