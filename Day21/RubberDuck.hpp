#ifndef _RUBBER_DUCK_HPP_
#define _RUBBER_DUCK_HPP_

#include"flyRocketPowered.hpp"
#include"Quack.hpp"
#include"strategyDuck.hpp"
#include<iostream>
using namespace::std;

class RubberDuck:public Duck {
	public:
		RubberDuck():Duck(new FlyRocketPowered(),new Quack()) {
			
		}
		
		void display() const {
			cout<<"I am a real Rubber duck"<<endl;
		}
	
	
};



#endif