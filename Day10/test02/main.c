#include<string.h>
#include<stdlib.h>


int main()
{
	char* p=NULL;
	p=(char*)malloc(10);
	
	//内存泄漏，拷贝越界
	strcpy(p,"0123456789");
	return 0;
}
