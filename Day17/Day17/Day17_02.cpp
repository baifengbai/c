#include<iostream>
#include<list>
#include<algorithm>
using namespace::std;

void show_list(list<int> &temp)
{
	list<int>::const_iterator iter;
	cout<<"........................."<<endl;
	for(iter = temp.begin();iter!=temp.end();++iter)
		{
			cout<<*iter<<endl;
		}

}
bool compare(int a,int b)
{
	return a>b;
}


int main()
{
	list<int> temp;
	list<int>::iterator iter;

	temp.push_back(1);
	temp.push_back(3);
	temp.push_back(2);

	//排序
	temp.sort(compare);

	show_list(temp);
}






