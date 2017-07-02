#include<iostream>
#include "rmb.h"

using namespace::std;

RMB::RMB(uint yuan,uint jiao):yuan(yuan),jiao(jiao)
{
	cout<<"RMB"<<this->yuan<<endl;
}

RMB::~RMB()
{
	cout<<"~RMB"<<this->yuan<<endl;				
}

void RMB::display() const
{
	cout<<"RMB: "<<yuan<<"."<<jiao<<endl;
}

//如果此处是引用的话，就相当与引用局部变量
//友元函数可以访问私有变量
RMB RMB::operator+(const RMB&b)
{
	uint yuan;
	uint jiao;

	yuan = 	this->yuan+b.yuan;
	jiao = this->jiao + b.jiao;

	if(jiao>100)
	{
		yuan++;
		jiao -= 100;
	}
	return RMB(yuan,jiao);
}


bool RMB::operator>(const RMB&b)
{

	bool ret = false;
	if(this->yuan>b.yuan)
	{
		ret = true;
	}
	else if(this->yuan == b.yuan)
	{
		if(this->jiao>b.jiao)
		{
			ret = true;
		}
	}
	return ret;
}













