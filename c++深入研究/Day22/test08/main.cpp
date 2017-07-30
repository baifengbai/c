#include<iostream>
#include "zi.h"

using namespace::std;

//父类指针指向子类对象
int main1(){
	fu *pfu= new zi("zi");
	
	
	pfu->print();//father
	pfu->father();//father

	//pfu->zi();//报错，has no member named ‘zi’
	
	
	return 0;
}

//子类对象指向父类指针
int main2(){
	//zi *pZi= new fu("father");需要调用static_cast来进行父子类之间的类型转换。dynamic_cast是用于虚函数的父子类之间类型转换
	fu *pfu = new fu("father");
	
	zi *pZi = static_cast<zi *>(pfu);
	
	
	pZi->father();//father，调用父类的非同名，可以
	
	pZi->fu::print();//father,可以
	
	//pZi->son();//报错，访问非法内存

	pZi->print();//son,正常执行，调用的是子类的，因为数据是私有的，而函数是公有的，并且print没有访问数据

	
	return 0;
}

//数据是私有的，函数是公有的
int main(){
	
	zi *pZi(NULL);
	
	pZi->print();//son，正常，因为没有访问数据
	
	pZi->son();//报错，因为指针是空指针
	
}
