#ifndef _RMB_H_
#define _RMB_H_

typedef unsigned int uint;

class RMB{	
	public:
	RMB(uint yuan,uint jiao);
	~RMB();
	bool operator>(const RMB&);
	RMB operator+(const RMB&);

	void display() const;

	private:
	uint yuan;
	uint jiao;
};

#endif
