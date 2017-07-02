#include<iostream>
using namespace::std;

class A{
	public:
		A();
		~A(){};
	private:
		const int val;
};
//必须使用成员列表对const数据成员进行初始化，否则编译错误
A::A():val(1)
{
}

int main()
{
	A a;
	return 0;

}
