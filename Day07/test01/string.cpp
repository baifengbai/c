#include<iostream>
#include<string>

using namespace::std;

int main(int argc,char*argv[])
{
	string a;
	string b("qiu");
	string c(b);
	string d(4,'a');
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;

	a = b;
	if(a.empty())
	{
		cout<<"a is empty"<<endl;
	}
	else
	{
		cout<<"a size is:"<<a.size()<<endl;		
	}
	
	if(a==b)
	{
		cout<<"a is euql to b"<<endl;		
	}
	return 0;
}
