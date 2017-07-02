#include"person.h"

int main()
{
	Person p("Joe");
	Person p1("tom");
	//p2是p浅拷贝过来的，name的地址一样，这样会导致name对应的内存被重复释放	
	Person p2 = p;
	p.Print();
	p2.Print();
	
	return 0;
}
