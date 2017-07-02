#include"furniture.h"
#include<iostream>
using namespace::std;

int main()
{
	SofaBed temp(1);
	temp.WatchTv();
	temp.sleep();
	temp.foldout();

	cout<<"size of furniture: "<<sizeof(furniture)<<endl;//4
	cout<<"size of bed: "<<sizeof(bed)<<endl;//16,内存对齐和虚函数表指针
	cout<<"size of sofa: "<<sizeof(sofa)<<endl;//16,内存对齐和虚函数表指针
	cout<<"size of SofaBed: "<<sizeof(SofaBed)<<endl;//24,,内存对齐和虚函数表指针

	
	return 0;
}
