#include<iostream>
#include"car.h"

using namespace::std;

namespace Qiu{
Engine::Engine(int id):m_id(id)
{

}
Wheel::Wheel(int id):m_id(id)
{

}

Car::Car(Engine*e,Wheel*w,string s):engine(e),wheel(w),name(s)
{
		
	
}

void Car::start()
{
	engine->start();
	wheel->roll();
	cout<<"car start"<<endl;
}

//重点
Benchi::Benchi(Engine*e,Wheel*w,string s ,int p):Car(e,w,s),price(p)
{
	

}

void Benchi::MusicOn()
{
	//重点，基类的public方法调用
	Car::start();
	cout<<"music on"<<endl;
}	


}
