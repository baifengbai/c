#include"furniture.h"


int main()
{
	SofaBed temp;
	temp.WatchTv();
	temp.sleep();
	temp.foldout();

	//temp.set_weight(10);编译器报错，因为无法区分是哪个基类的
	//说明基类
	temp.sofa::set_weight(10);
	return 0;
}
