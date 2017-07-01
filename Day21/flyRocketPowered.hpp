#ifndef _FLY_ROCKET_POWERED_HPP_
#define _FLY_ROCKET_POWERED_HPP_

#include"flyBehavior.hpp"
#include<iostream>
using namespace::std;

class FlyRocketPowered:public FlyBehavior {

public:
		void fly() const {
			cout<<"I am flying with a rocket"<<endl;
		}
	
};	

#endif