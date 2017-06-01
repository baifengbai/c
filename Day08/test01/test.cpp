#include<iostream>
using namespace::std;

class Test{
	public:
		Test():number(4)
		{
			cout<<"Test"<<endl;
		}
		~Test()
		{
			cout<<"~Test"<<endl;
		}
	private:
		int number;

};

int main()
{
	{
		Test a;
	}

	Test* p = new Test();

	delete p;

	p = NULL;


	cout<<"..........."<<endl;

	p = new Test[2];
	delete[] p;
	p = NULL;




	
}
