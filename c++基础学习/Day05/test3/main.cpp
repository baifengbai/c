#include<iostream>
#include"car.h"

using namespace::std;

void foo(car*pcar)
{
	pcar->run();
	pcar->stop();
	pcar->print();
}

void foo2(car& rcar)
{
	rcar.run();
	rcar.stop();
	rcar.print();	
}

int main(int argc,char*argv[])
{
	car Car;

	cout<<"size is "<<sizeof(Car)<<endl;
	cout<<"address is "<<&Car<<endl;
	Car.setProperty(100,10);
	foo(&Car);
	foo2(Car);
	return 0;
}

