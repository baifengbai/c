#include<stdio.h>

int i = 0;
class A {
	public:
		static int count;
		int val;
	A()
	{
		count++;
	}

	~A()
	{
		count--;
	}	
};

int A::count = 0;

int main()
{
	A a;
	A b;

	printf("Number of A is : %d\n",A::count);
	//全局数据和静态数据是存放在一个区域的，所以地址很接近，但是val是在栈里的	
	printf("0x%x\n",&a.count);
	printf("0x%x\n",&b.count);	
	printf("0x%x\n",&i);
	printf("0x%x\n",&b.val);
}

