#include<stdio.h>


int main(){
	char a = 10;
	int b = static_cast<int>(a);	
	printf("b is:%d\n",b);
	
	const int* c = &b;
	int *d = const_cast<int *>(c);
	*d = 9;
	printf("d is:%d\n",*d);
	
	int n = 10;
	int* m = &n;
	char* q = reinterpret_cast<char *>(m);	
	printf("q is:%d\n",*q);
	
	
}