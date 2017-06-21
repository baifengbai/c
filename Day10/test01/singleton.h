
#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class singleton{
	public:
	static singleton* getInstance();
	void dosomething();
	void destroy();
	
	private:
	singleton();
	~singleton();
	singleton(const singleton&s);
	singleton& operator=(const singleton&s);
	static singleton* pinstance;
};

#endif
