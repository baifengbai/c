#include<iostream>
#include"singleton.h"
using namespace::std;


singleton::singleton()
{
	cout<<"singleton"<<endl;
}

singleton::~singleton()
{
	cout<<"~singleton"<<endl;	
}

singleton::singleton(const singleton&s)
{

}

singleton& singleton::operator=(const singleton&s)
{


}
void singleton::dosomething()
{
	cout<<__FILE__<<" "<<__func__<<endl;
}

void singleton::destroy()
{
	delete pinstance;
	
	pinstance = NULL;
}

//注意，此处不需要再使用static，否则会报错
singleton* singleton::pinstance = NULL;

//实现线程安全:pthread_mutex_lock/pthread_mutex_unlock
singleton* singleton::getInstance()
{
	singleton* ret= NULL;
	if(NULL == pinstance)
	{
		pinstance = new singleton();
		ret = pinstance;
	}	
	return ret;
}


