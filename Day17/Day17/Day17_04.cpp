#include<map>
#include<string>
#include<iostream>

using namespace::std;
int main()
{
	map<int,string> mapStudent;
	map<int,string>::iterator iter;

	mapStudent.insert(pair<int,string>(1,"one"));

	mapStudent.insert(map<int,string>::value_type(2,"two"));

	mapStudent.insert(make_pair(3,"Three"));

	mapStudent[0] = "Zero";

	//已排好序：升序
	for(iter=mapStudent.begin();iter!=mapStudent.end();++iter)
		{
			cout<<iter->first<<":"<<iter->second<<endl;
		}

	//可以实现数字到英文的转换
	cout<<mapStudent[2]<<endl;
	return 0;
}


 
