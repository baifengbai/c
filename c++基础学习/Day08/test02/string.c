#include<stdio.h>

int main()
{
	char* p1 = "hello";
	char* p2 = "hello";
	if(p1==p2)
	{
		printf("it is equal\n");
	}
	else
	{
		printf("it is not equal\n");
	} 

	p1[2] = 'x';
	return 0;
}
