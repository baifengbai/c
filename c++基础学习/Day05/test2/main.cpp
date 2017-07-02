#include<iostream>

using namespace::std;

class car {
	public:
		void run()
		{
			cout<<"car run"<<endl;
		}

		void stop()
		{
			cout<<"car stop"<<endl;			
		}
		void setProperty(int price,int carnum)
		{
			m_price  = price;
			m_CarNum = carnum;
		}

	private:
		int m_price,m_CarNum;

};

int main(int argc,char *argv[])
{
	car a;
	//在类里函数是不占用内存大小的
	cout<<sizeof(a)<<endl;
	a.setProperty(1000,99);
	a.run();
	a.stop();
	return 0;
}







