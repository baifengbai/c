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
bool operator==(const ID &temp1,const ID &temp2)
{
	return ((temp1.score==temp2.score)&&(temp1.m_name==temp2.m_name));

}
bool operator<(const ID &temp1,const ID &temp2)
{
	return (temp1.score<temp2.score);
}


int main()
{
	
	vector<ID> temp;
	vector<ID>::const_iterator iter;
	temp.push_back(ID("qiu",1));
	temp.push_back(ID("jia",3));
	temp.push_back(ID("hao",2));
	
	sort(temp.begin(),temp.end());

	for(iter=temp.begin();iter!=temp.end();++iter)
	{
		cout<<iter->score<<endl;
	}
	return 0;
}













