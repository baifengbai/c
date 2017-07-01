#ifndef _QUACK_HPP_
#define _QUACK_HPP_

#include"quackBehavior.hpp"
#include<iostream>
using namespace::std;

class Quack:public QuackBehavior{
	public:
	void quack() const {
		cout<<"I can Quack"<<endl;
	}
};
#endif

