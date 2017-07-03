#include<iostream>
#include<new>

const int buf(512);
int N(5);
char buffer[buf]; //静态区内存，与程序共存亡

using namespace std;
int main(){
	double* p1 = new double[N];
	double* p2 = new(buffer) double[N];//在指定的内存buffer中分配内存,它丧失了内存的独立性，当再次调用new(buffer) double[N]时，之前的内存会被自动释放	
	
	for(int i;i<N;i++){
		p1[i] = p2[i] = i;
		cout<<&p1[i]<<":"<<p1[i]<<endl;
		cout<<&p2[i]<<":"<<p2[i]<<endl;				
	}
	
	p2 = new(buffer) double[N];//之前的内存会被释放
	for(int i;i<N;i++){
		p2[i] = i+10;
		cout<<&p1[i]<<":"<<p1[i]<<endl;
		cout<<&p2[i]<<":"<<p2[i]<<endl;				
	}
}