#include <iostream>
//父类与子类之间的重载，同名函数会覆盖
//即使参数类型不一样，不能直接调用，必须调用父类默认生成的对象来调用

class A
{
public:
	void go()
	{
		std::cout << "A---go";
	}

	void go(int num)
	{
		std::cout << "A---go"<<num;
	}
	void go(char *str)
	{
		std::cout << "A---go"<<str<<"str";
	}
	void goA(char *str)
	{
		std::cout << "A---go" << str << "str";
	}





};
class B :public A
{
public:
	//const  函数重载一般适用于常量对象，
	//非const一般适用于变量对象
	void go()
	{
		std::cout << "B---go";
	}
	/*void go() const  //const指针会调用
	{
		std::cout << "B---go const";
	}
*/


};


void main()
{

	B *p = new B;
	p->go();
	//p->go(1);

	const B *pb = new B;
	pb->go();//注意const也可重载



	std::cin.get();

}

void main1()
{
	B *pb = new B;
  //  pb->go(NULL);
	pb->goA("1");
	//pb->go("1");



	pb->A::go(NULL);
	pb->A::go("123");
	//pb->A::go(nullptr);//C++空指针不能打印

	std::cin.get();




}