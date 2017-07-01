#include"RefCout.h"
#include"smart_ptr.h"


int main()
{
	SmartPtr<sample> p = new sample;//sample *
	SmartPtr<sample> p2 = new sample;//sample *

	p = p2;//=重载
	p->dosomething();//->重载

	(*p).dosomething();
	return 0;
}