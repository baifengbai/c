#ifndef FORECAST_CONDITION_H_
#define FORECAST_CONDITION_H_

#include<iostream>
using namespace::std;

class ForecastCondition:public Observer{
	public:
		ForecastCondition():m_currentPressure(0.0),m_lastPressure(0.0) {
			
		}
		void update(float temperature,float humidity,float pressure) {
			m_lastPressure = m_currentPressure;
			m_currentPressure = pressure;
			display();
		}
		void display(){
			cout.setf(ios::showpoint);
			cout.precision(3);
			cout<<"ForecastCondition Condition "<<m_currentPressure<<endl;
		}	
	private:
		float m_currentPressure;
		float m_lastPressure;
};


#endif