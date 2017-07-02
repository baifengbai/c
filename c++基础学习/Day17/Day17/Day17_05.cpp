#include<map>
#include<string>
#include<iostream>

using namespace::std;
class compare 
{
	public:
		//重载()运算符
		bool operator()(int a,int b){return a>b;}
};




int main()
{
	map<int,string,compare> mapStudent;
	map<int,string>::iterator iter;

	mapStudent.insert(pair<int,string>(1,"one"));

	mapStudent.insert(map<int,string>::value_type(2,"two"));

	mapStudent.insert(make_pair(3,"Three"));

	mapStudent[0] = "Zero";

	//已排好序：降序
	for(iter=mapStudent.begin();iter!=mapStudent.end();++iter)
		{
			cout<<iter->first<<":"<<iter->second<<endl;
		}


	return 0;
}


 

