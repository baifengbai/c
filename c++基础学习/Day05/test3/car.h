#ifndef _CAR_H_
#define _CAR_H_

class car {
	public:
		void run();
		void stop();
		void setProperty(int price,int CarNum);
		void print();

	private:	
		int m_price,m_carnum;
};
#endif
