#include<iostream>
using namespace::std;

inline bool isnumber(char input)
{
	//内联函数里不能有复杂的控制语句
	//一般1到5行
	return ((input>='0') && (input<='9'))?true:false;
}

int main(int argc,char *argv[])
{
	char c = 0;
	while((c=cin.get())!='q')
	{
		if(isnumber(c))
		{
			cout<<"your input is digit"<<endl;
		}
		else
		{
			cout<<"your input is non-digit"<<endl;
		}

	}
	return 0;

}
