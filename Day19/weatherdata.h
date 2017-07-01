#ifndef _WEATHER_DATA_H_
#define _WEATHER_DATA_H_

#include<list>
#include<assert.h>
#include "subject.h"
#include "observer.h"

using namespace::std;

class WeatherData:public Subject {
	public:
		WeatherData():m_temperature(0.0),m_humidity(0.0),m_pressure(0.0){
			
		}
		~WeatherData(){
			
		}
		void registerObserver(Observer *o){
			assert(o);//必须不为空
			m_observers.push_back(o);
		}
		void removeObserver(Observer *o){
			assert(o);//必须不为空
			m_observers.remove(o);
		} 
		void notifyObserver() const {
			for(list<Observer*>::const_iterator it = m_observers.begin();it != m_observers.end();++it){ //此处必须使用const_iterator，因为notifyObserver是const
				Observer* obj = *it;
				obj->update(m_temperature,m_humidity,m_pressure);
			}
		} 
		
		
	void setMeasurements(float temperature,float humidity,float pressure){
		m_temperature = m_temperature;
		m_humidity = humidity;
		m_pressure = pressure;
		measurementsChanged();
	}
	void measurementsChanged(){
		notifyObserver();
	}		
	private:
		float m_temperature;
		float m_humidity;
		float m_pressure;
	
		list<Observer*>m_observers;//链表保存所有的Observer
		
	private:
		WeatherData(const WeatherData&);
		WeatherData& operator=(const WeatherData&);
};














#endif