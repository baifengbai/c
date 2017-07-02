#include<iostream>

using namespace::std;

int main(void)
{
	int one = 1;

	//引用数据类型，避免大量数据的开销。它作为目标的别名,主要用来传递函数参数
	//它与指针的区别是它初始化后是不可改变的
	//void引用是不合法的，因为void本质上不是一个类型
	//不能建立引用数组，没有引用的引用，也没有引用的指针
	//传递引用与传递指针效果是一致的
	int& one_reference = one;
	
	cout<<"one:"<<one<<endl;
	cout<<"one_reference:"<<one_reference<<endl;

	one_reference = 2;

	cout<<"one:"<<one<<endl;
	cout<<"one_reference:"<<one_reference<<endl;

	cout<<&one<<endl;
	cout<<&one_reference<<endl;

	return 0;

}
