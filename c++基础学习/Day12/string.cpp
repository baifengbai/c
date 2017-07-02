#include"string.h"
#include<string.h>
#include<iostream>


using namespace::std;

//命名空间可以使用以下两种方式

//1.using namespace::QiuString;

//2.
namespace QiuString {

	String::String(const char* word)
	{
		cout<<"String"<<endl;
		if(NULL == word)
		{
			cout<<"malloc0"<<endl;
			my_char=new char[1];
			*my_char = '\0';
		}
		else
		{
			int len = strlen(word)+1;
			cout<<"malloc1"<<endl;
			my_char=new char[len];							
			strcpy(my_char,word);
		}
	}
	String::~String()
	{
		cout<<"~String"<<endl;
		delete[] my_char;
		my_char = NULL;
	}	

	String::String(const String&other)
	{
		cout<<"copy String"<<endl;
		int lenth = strlen(other.my_char)+1;	
		cout<<"malloc2"<<endl;				
		my_char=new char[lenth];							
		strcpy(my_char,other.my_char);												
	}
	String& String::operator=(const String& other)
	{
		cout<<"= String"<<endl;
		if(this == &other)
		{		
			return *this;
		}
		
		delete[] my_char;
		int lenth = strlen(other.my_char)+1;	
		cout<<"malloc3"<<endl;				
		my_char=new char[lenth];							
		strcpy(my_char,other.my_char);		

		return *this;	
	}
	String& String::operator=(const char*word)
	{
		cout<<"= char*"<<endl;		
		delete[] my_char;

		if(NULL == word)
		{
			cout<<"malloc4"<<endl;
			my_char=new char[1];
			*my_char = '\0';			
		}
		else
		{
			int lenth = strlen(word)+1;
			cout<<"malloc5"<<endl;					
			my_char=new char[lenth];							
			strcpy(my_char,word);	

		}
	

		return *this;	
	}
	String& String::operator+=(const String&other)
	{
		int lenth = strlen(this->my_char)+strlen(other.my_char)+1;
		char*temp = this->my_char;

		my_char=new char[lenth];
		strcpy(my_char,temp);
		//拼接，会把之前的‘/0’给覆盖掉
		strcat(my_char,other.my_char);

		delete[] temp;
		return *this;
	}	
	String& String::operator+=(const char*world)
	{
		String result(world);
		//调用上面定义的重载运算符
		*this += result;
		return *this;
	}	
	String String::operator+(const String&other)
	{
		String result;
		
		result += *this;
		result += other;
		return result;
	}
	String String::operator+(const char*world)
	{
		String result = *this;
		result += world;
		return result;
	}	
	

}

































