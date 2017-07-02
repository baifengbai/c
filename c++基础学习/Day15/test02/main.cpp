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
	Dog dog;
	Cat cat;
	/*
	fun(dog);
	fun(cat);
	*/
	
	//使用指针的效果是一致的
	/*
	fun2(&dog);
	fun2(&cat);
	*/

	//值传递不可以，相当于执行了拷贝构造，生成一个新的对象
	fun3(dog);
	fun3(cat);
	//大小为16,因为会多出一个指针和字节对齐，指向虚函数表
	cout<<sizeof(Animal)<<endl;
	return 0;
}
