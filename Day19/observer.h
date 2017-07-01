#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Observer{
	public:
		virtual ~Observer()=0;//纯虚函数不能{}
		virtual void update(float,float,float)=0;


};

//纯虚函数是需要实现的，否则会报错
Observer::~Observer(){
	
	
}

#endif




