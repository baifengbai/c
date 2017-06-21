#include"car.h"
#include<iostream>

using namespace::std;
using namespace::Qiu;


int main()
{
	Engine en(1);
	Wheel wh(1);

	Benchi benchi(&en,&wh,"benchi",100);
	
	benchi.MusicOn();

	//调用父类的函数
	benchi.start();
	return 0;
}

