#include"furniture.h"
#include<iostream>
using namespace::std;

int main()
{
	SofaBed temp;
	temp.WatchTv();
	temp.sleep();
	temp.foldout();

	cout<<"size of furniture: "<<sizeof(furniture)<<endl;//4
	cout<<"size of bed: "<<sizeof(bed)<<endl;//4
	cout<<"size of sofa: "<<sizeof(sofa)<<endl;//4	
	cout<<"size of SofaBed: "<<sizeof(SofaBed)<<endl;//8,存在2个weight

	
	return 0;
}
