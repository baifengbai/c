#ifndef _MALLARD_DUCK_HPP_
#define _MALLARD_DUCK_HPP_

#include"strategyDuck.hpp"
#include"flyNoWay.hpp"
#include"Quack.hpp"
#include<iostream>
using namespace::std;

class MallardDuck:public Duck{
	public:
		MallardDuck():Duck(new FlyNoway(),new Quack()) {
			
		}
		
		void display() const {
			cout<<"I am a real Mallard duck"<<endl;
		}
	
	
};



#endif