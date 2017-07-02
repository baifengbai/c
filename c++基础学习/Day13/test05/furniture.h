#ifndef _FURNITURE_H_
#define _FURNITURE_H_
#include<iostream>
using namespace::std;

//再次抽象sofa和bed
class furniture {
	public:
		furniture(int weight=0);
		void set_weight(int weight)
		{
			m_weight = weight;
			cout<<"weight: "<<m_weight<<endl;
		}
	private:
		int m_weight;	
};


class sofa:virtual public furniture{
	public:	
		sofa(int weight=0);

		void WatchTv()
		{
			cout<<"WatchTv"<<endl;
		}
};

class bed :virtual public furniture{
	public:
		bed(int weight=0);
		void sleep()
		{
			cout<<"sleep"<<endl;
		}
	
};

class SofaBed: public sofa, public bed {
	public:
		SofaBed(int weight=0);
		void foldout()
		{
			cout<<"foldout"<<endl;
		}
};

#endif 
