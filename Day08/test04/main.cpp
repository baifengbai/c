#include"person.h"

int main()
{
	Person p("Joe");
	Person p1("tom");
	//将调用拷贝构造函数创建一个新的内存
	Person p2 = p;
	p.Print();
	p2.Print();
	
	p2 = p1;
	return 0;
}
