#include"animal.h"
#include<iostream>

using namespace::std;
using namespace::QiuAnimal;

int main()
{
	Cat temp(1,10,"china");
	temp.SetColor(5);

	cout<<"Cat age: "<<temp.GetAge()<<endl;
	cout<<"Cat color: "<<temp.GetColor()<<endl;
	temp.GetLocation();

	temp.SetLocation("Japan");
	temp.GetLocation();
	temp.mm_location = "A"	
	return 0;
}
