#include"weatherdata.h"
#include"currentcondition.h"
#include"forecastcondition.h"

int main(){
	CurrentCondition current;
	ForecastCondition forest;
	WeatherData weatherdata;
	weatherdata.registerObserver(&current);
	weatherdata.registerObserver(&forest);	
	
	weatherdata.setMeasurements(14,65,13.5f);
}