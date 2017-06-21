#ifndef _INCREASE_H_
#define _INCREASE_H_

class Increase {
	public:
	Increase(int val);
	~Increase();
	//前置++i
	Increase& operator++();
	//后置i++,int起到的作用仅仅是区分前置和后置	
	Increase operator++(int); 
	
	int getVal() const {
		return val;
	}
	private:
	int val;
};

#endif
