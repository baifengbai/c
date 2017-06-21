#include<iostream>
#include<algorithm>
#include<map>
using namespace::std;


int main(){
    map<char,int> m;
    pair<map<char,int>::const_iterator,map<char,int>::const_iterator> ret;

    m['a']=1;
    m['b']=2;
    m['c']=2;    
    m['d']=3;

    ret =m.equal_range('b');

    cout<<ret.first->first<<endl;
    cout<<ret.first->second<<endl;
    cout<<ret.second->first<<endl;
    cout<<ret.second->second<<endl;    
}




