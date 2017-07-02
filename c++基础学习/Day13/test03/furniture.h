#ifndef _FURNITURE_H_
#define _FURNITURE_H_
#include<iostream>
using namespace::std;

class sofa {
	public:	
		sofa(int weight=0);
		void set_weight(int weight)
		{
			m_weight = weight;
			cout<<"weight: "<<m_weight<<endl;
		}
		void WatchTv()
		{
			cout<<"WatchTv"<<endl;
		}
	private:
		int m_weight;

};

class bed {
	public:
		bed(int weight=0);
		void set_weight(int weight)
		{
			m_weight = weight;
			cout<<"weight: "<<m_weight<<endl;
		}
		void sleep()
		{
			cout<<"sleep"<<endl;
		}
	private:
		int m_weight;		

};

class SofaBed:public sofa,public bed {
	public:
		SofaBed();
		void foldout()
		{
			cout<<"foldout"<<endl;
		}
};

#endif 
