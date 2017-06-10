#ifndef _CAR_H_
#define _CAR_H_
#include<iostream>
using namespace::std;

namespace Qiu {

class Engine {
	public:
		Engine(int id=0);
		~Engine()
		{

		}	
		
		void start()
		{
			cout<<"engine start"<<endl;
		}

	private:
		int m_id;
};

class Wheel {
	public:
		Wheel(int id=0);
		~Wheel(){}	
		
		void roll()
		{
			cout<<"Wheel roll"<<endl;
		}

	private:
		int m_id;		
};

//优先使用组合而不是继承
class Car {
	public:
		Car(Engine*,Wheel*,string);
		~Car(){}
		void start();
		void stop()
		{
			cout<<"car stop"<<endl;
		}

	private:
		Car(const Car&);
		Car& operator=(const Car&);				
		Engine* engine;
		Wheel*  wheel;
		string name;
};

class Benchi:public Car {
	public: 
		Benchi(Engine*,Wheel*,string ,int);
		~Benchi(){}
		void MusicOn();	

	private:
		int price;
};

} 
#endif








