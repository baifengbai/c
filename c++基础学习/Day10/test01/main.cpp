#include"singleton.h"

int main()
{
	
	singleton::getInstance()->dosomething();	

	/*
	会报错，因为构造函数和析构函数是私有的，无法调用	
	singleton a = new singleton();

	delete a;
	*/
	
	singleton::getInstance()->destroy();
	return 0;
}


