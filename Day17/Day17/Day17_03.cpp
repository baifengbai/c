#include<iostream>
#include<set>
using namespace::std;

int main()
{
	set<int> temp;
	set<int>::iterator iter;


	temp.insert(-1);
	temp.insert(0);	
	temp.insert(99);	
	temp.insert(3);

	//输出的结构是已经排好顺序的
	for(iter=temp.begin();iter!=temp.end();++iter)
		{
			cout<<*iter<<endl;
		}
}






















