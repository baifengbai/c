#ifndef _REFCOUT_H_
#define _REFCOUT_H_
#pragma once
#include<stdio.h>

#define trace printf


class RefCout {
	public:
	RefCout()
		{
			RefCnt = 0;
		}
	virtual ~RefCout(){}
		void up()
		{
			++RefCnt;
			trace("RefCnt is up to:%d\n",RefCnt);
		}
		
		void down()
		{
			if(--RefCnt==0)
				{
					delete this;
				}
				trace("RefCnt is down to:%d\n",RefCnt);
		}
		

	private:
		int RefCnt;
};

class sample:public RefCout
{
	public:
		sample()
			{
				
			}
		~sample()
			{
				
			}
		void dosomething()
			{
				trace("do something\n");
			}


};


#endif

