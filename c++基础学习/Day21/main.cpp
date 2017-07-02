#include<memory>
#include"MallarDuck.hpp"
#include"RubberDuck.hpp"
#include"flyRocketPowered.hpp"
#include"flyNoWay.hpp"

int main(int argc,char*argv[]){
	auto_ptr<MallardDuck> mallard(new MallardDuck());
	auto_ptr<RubberDuck> rubber(new RubberDuck());
	
	mallard->performFly();
	mallard->performQuack();
	 
	rubber->performFly();
	rubber->performQuack();	
	
	//根据代码逻辑修改飞行行为
	mallard->setFlyBehavior(new FlyNoway());
	mallard->performFly();	
	

}