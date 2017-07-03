#include<iostream>
#include<vector>
#include<algorithm>
#include<array>

using namespace::std;

int main(){
	vector<int> a;
	a.push_back(1);
	a.push_back(2);	
	a.push_back(3);
	int res = 0;
	
	//lambda表达式，res相当于返回值，for_each里的每一个参数
	for_each(a.begin(),a.end(),[&res](int x){res += x;});
	cout<<"vector:"<<res<<endl;
	
	res = 0;
	array<int,4> newArray = {1,2,3,4};
	array<int,4> newArray2 = newArray;//c++里数组是可以直接赋值的。
	
	for_each(newArray2.begin(),newArray2.end(),[&res](int x){res+=x;});
	cout<<"vector:"<<res<<endl;	
	return 0;
}