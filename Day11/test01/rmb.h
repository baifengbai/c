#ifndef _RMB_H_
#define _RMB_H_

typedef unsigned int uint;

class RMB{
	friend bool operator>(const RMB&,const RMB&);
	friend RMB operator+(const RMB&,const RMB&);
	
	public:
	RMB(uint yuan,uint jiao);
	~RMB();

	void display() const;

	private:
	uint yuan;
	uint jiao;
};

#endif
