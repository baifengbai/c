#include<iostream>
#include<list>
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


int main()
{
	list<int> temp;
	list<int>::iterator iter;

	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(3);

	//插到list的最前面
	temp.push_front(4);
	
	show_list(temp);

	iter = temp.begin();
	//删除
	temp.erase(iter);

	show_list(temp);

	temp.erase(temp.begin());

	show_list(temp);

	return 0;
}





