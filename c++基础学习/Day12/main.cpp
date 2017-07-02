#include"string.h"
#include<iostream>

using namespace::std;
using namespace::QiuString;


int main()
{
	//构造函数
	String s1("hello");
	//拷贝构造	
	String s2 = s1;
	//构造函数
	String s3 = "word";
	//赋值运算符
	s3 = s1;
	cout<<"s3= "<<s3.get_val()<<endl;
	//赋值运算符
	s3 = "world";
	cout<<"s3= "<<s3.get_val()<<endl;

	cout<<".............."<<endl;
	s3+=s1;
	cout<<"s3= "<<s3.get_val()<<endl;

	s3+="qiu jia hao";
	cout<<"s3= "<<s3.get_val()<<endl;	

	String s4=s3+s1;
	cout<<"s4= "<<s4.get_val()<<endl;

	String s5=s3+"name";
	cout<<"s5= "<<s5.get_val()<<endl;
	
	return 0;
}

