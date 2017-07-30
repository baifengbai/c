#include<iostream>
#include "fu.h"

using namespace::std;

class zi:public fu {

	public:
	zi(char *pTemp):pChar(pTemp),fu("father"){
		
	}
	
	void son(){
		cout<<pChar<<endl;
	}
	void print(){
		cout<<"son"<<endl;
	}
	
	private:
		char* pChar;
};
