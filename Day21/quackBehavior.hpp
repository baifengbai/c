#ifndef _QUACK_BEHAVIOR_HPP_
#define _QUACK_BEHAVIOR_HPP_

//纯虚基类
class QuackBehavior {
	public:virtual ~QuackBehavior()=0;
	public:virtual void quack() const = 0;
	
};
//必须定义否则链接不通过，不能在类里定义
QuackBehavior::~QuackBehavior(){
	
}



#endif