#ifndef _STRING_H_

#include<stdio.h>
namespace QiuString {

class String{
	public:
	String(const char* = NULL);
	~String();
	
	//拷贝构造函数：1.赋值初始化 2.函数返回值 3.函数入参
	String(const String&);
	
	//赋值运算符重载
	//等价于String a，a=b;
	String& operator=(const String&);
	//等价于String a，a="qiu jia hao";
	String& operator=(const char*);	

	String& operator+=(const String&);
	String& operator+=(const char*);

	//生成新的对象
	String operator+(const String&);
	String operator+(const char*);

	inline const char* get_val() const {
		return my_char;
	};

	private:
		char *my_char;
};





}
#endif
