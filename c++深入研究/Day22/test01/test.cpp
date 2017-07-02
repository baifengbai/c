#include<iostream>

using namespace::std;

void test1(){
	int num1 = 1;
	int num2 = 2;	
	int & num3(num1);
	num3 = num2;//只是赋值,不是修改引用变量的值
	cout<<num3<<endl;
	cout<<num2<<endl;
}
void test2(){
	int num1 = 1;
	int num2 = 2;	
	//int *&num3(&num1);会报错，因为&是对变量的应用，而&num1是一个常量
	int *pnum3(&num2);
	int	*&pnum4(pnum3);//对一个指针变量的引用
	pnum4 = &num1;
	cout<<*pnum4<<endl;
	*pnum4 = 100;
	cout<<num1<<endl;	
}

void test3(){
	int num1 = 1;
	int num2 = 2;
	int *pnum(&num1);
	int*&pnum3 = pnum;//左值引用
	//int*&pnum4 = &num2;报错
	int && pnum4=0;//右值引用:因为&num2并不是一个对象，是一个常量值，无法引用，C语言里实现往往要内嵌汇编。
	//cout<<pnum4<<endl;
}

int & test4(){
	int num1 = 1;
	int & r = num1;
	return r;
}
int *& test5(){
	int *p = new int;
	cout<<"&P:"<<&p<<endl;
	int *& r = p;
	return r;
}
int main(){
	
	//test1();
	//test2();
	//test3();
	int &a = test4();
	cout<<a<<endl;//返回1，因此此时num1是栈上的值，但是没有被回收，所有会正常显示。
	cout<<"ABCDEFG"<<endl;
	cout<<a<<endl;//已回收num1，乱码
	
	int * &b = test5();//此处的b是局部变量p的引用,p是存在于栈上，但p指向的值存在于堆上，所以c不会变化
	int * c = test5();
	cout<<b<<endl;//因此此时p是栈上的值，但是没有被回收，所有会正常显示。
	cout<<"ABCDEFG"<<endl;
	cout<<b<<endl;//已回收p，乱码	
	
	cout<<c<<endl;//不变
	cout<<"ABCDEFG"<<endl;
	cout<<c<<endl;//不变

	//c++里delete(c)后禁止访问*c;并且c的值会发生变化，变成一个安全的地址值(与c语言明显不一样)
}


