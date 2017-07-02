#ifndef _STRATEGYDUCK_HPP_
#define _STRATEGYDUCK_HPP_

#include<iostream>
#include<memory>
#include<assert.h>
#include"flyBehavior.hpp"
#include"quackBehavior.hpp"

using namespace::std;
class Duck {
	private:
		auto_ptr< FlyBehavior > _flyBehavior;
		auto_ptr< QuackBehavior > _quackBehavior;
		
		Duck(const Duck&);//禁止拷贝构造
		void operator=(const Duck&);
	
	protected:
		Duck(FlyBehavior* flyBehavior,QuackBehavior* quackBehavior):_flyBehavior(flyBehavior),_quackBehavior(quackBehavior){
			assert(flyBehavior);
			assert(quackBehavior);
			
		}
		
		virtual ~Duck(){
			
		}
		
	public:
		void setFlyBehavior(FlyBehavior* fb){
			assert(fb);
			_flyBehavior = auto_ptr<FlyBehavior >(fb);
		}
		void setQuackBehavior(QuackBehavior* qb){
			assert(qb);
			_quackBehavior = auto_ptr<QuackBehavior >(qb);
		}		
		void performFly() const {
			_flyBehavior->fly();//auto_ptr已重载指针访问运算符
		}
		void performQuack() const {
			_quackBehavior->quack();
		}
		void swim() const {
			cout<<"All ducks can swim"<<endl;
		}
		virtual void display() const=0;
};
#endif