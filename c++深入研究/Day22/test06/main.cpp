#include <iostream>
//����������֮������أ�ͬ�������Ḳ��
//��ʹ�������Ͳ�һ��������ֱ�ӵ��ã�������ø���Ĭ�����ɵĶ���������

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
	//const  ��������һ�������ڳ�������
	//��constһ�������ڱ�������
	void go()
	{
		std::cout << "B---go";
	}
	/*void go() const  //constָ������
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
	pb->go();//ע��constҲ������



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
	//pb->A::go(nullptr);//C++��ָ�벻�ܴ�ӡ

	std::cin.get();




}