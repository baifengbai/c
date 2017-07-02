#ifndef _FLY_BEHAVIOR_HPP_
#define _FLY_BEHAVIOR_HPP_



//纯虚基类
class FlyBehavior {
	public:virtual ~FlyBehavior()=0;
	public:virtual void fly() const = 0;
	
};
//必须定义否则链接不通过，不能在类里定义
FlyBehavior::~FlyBehavior(){
	
};



#endif
