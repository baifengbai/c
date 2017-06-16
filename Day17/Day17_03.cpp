#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
class ID
{
	public:
	ID():score(0),m_name("")
	{
	}
	ID(string name,int num):score(num),m_name(name)
	{
	}
	
	int score;
	string m_name;
};
bool compare(const ID &temp1,const ID &temp2)
{
	return temp1.score>temp2.score;
}


int main()
{
	
	vector<ID> temp;
	vector<ID>::const_iterator iter;
	temp.push_back(ID("qiu",1));
	temp.push_back(ID("jia",5));
	temp.push_back(ID("hao",2));

	//实现了倒序
	sort(temp.begin(),temp.end(),compare);

	for(iter=temp.begin();iter!=temp.end();++iter)
	{
		cout<<iter->score<<endl;
	}
	return 0;
}














