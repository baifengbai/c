#include<iostream>

using namespace::std;

class fu {
	public:
	fu(char *pTemp):pChar(pTemp){
		
	}
	
	void father(){
		cout<<pChar<<endl;
	}
	void print(){
		cout<<"father"<<endl;
	}
	
	private:
		char* pChar;
};