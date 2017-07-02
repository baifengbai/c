#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

void show_array(const vector<int>&temp)
{
	vector<int>::const_iterator iter;
	for(iter=temp.begin();iter!=temp.end();++iter)
		{
			cout<<*iter<<endl;
		}

}

int main()
{
	vector<int> temp;
	
	temp.push_back(12);
	temp.push_back(10);
	temp.push_back(30);

	show_array(temp);

	sort(temp.begin(),temp.end());
	
	show_array(temp);
}







