#include<vector>
#include<algorithm>
#include<iostream>
using namespace::std;

int main()
{
    int temp[] = {1,6,3,3,8,5,6};
    //Create a vector v by copying the range temp[_First, _Last) 
    vector<int> v(temp,temp+7);
    pair<vector<int>::iterator,vector<int>::iterator> bounds;

    //使用之前需要先排号序
    sort(v.begin(),v.end());
    
    bounds=equal_range(v.begin(),v.end(),3);

    std::cout<<"first:"<<(bounds.first)<<std::endl;
    std::cout<<"second:"<<(bounds.second)<<std::endl;
    return 0;
}





