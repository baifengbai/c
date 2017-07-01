#ifndef _FLY_NO_WAY_HPP_
#define _FLY_NO_WAY_HPP_

#include"flyBehavior.hpp"
#include<iostream>
using namespace::std;

class FlyNoway:public FlyBehavior {
	
	public:
		void fly() const {
			cout<<"I can not fly"<<endl;
		}
	
	
};


#endif