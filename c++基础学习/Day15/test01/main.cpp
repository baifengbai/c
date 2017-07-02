#include"animal.h"

void fun(const Animal& other)
{
	other.makesoud();
}

int main()
{
	Dog dog;
	Cat cat;

	fun(dog);
	fun(cat);
	return 0;
}
