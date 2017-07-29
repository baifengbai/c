#include<iostream>
#include<stdlib.h>

using namespace::std;
void go(int num){
	cout<<"go num"<<endl;
}
void go(char* pStr){
	cout<<"go char"<<endl;
}

int main(){
	//auto p = go;编译阶段报错，不知道哪个函数
	
	void (*p1)(int num) = go;
	void (*p2)(char* pStr) = go;

	go(NULL);//NULL实际为0；
	go(nullptr);//nullptr代表空指针；
	return 0;
}