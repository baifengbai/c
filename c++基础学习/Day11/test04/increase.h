#ifndef _INCREASE_H_
#define _INCREASE_H_

class Increase {
	//前置++i
	friend Increase& operator++(Increase&);
	//后置i++,int起到的作用仅仅是区分前置和后置	
	friend Increase operator++(Increase&,int); 
	
	public:
	Increase(int val);
	~Increase();

	int getVal() const {
		return val;
	}
	private:
	int val;
};

#endif
