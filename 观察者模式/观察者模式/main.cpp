#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
using namespace std;

int main()
{
	WeatherData *weatherData = new WeatherData();
	CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherData);
	
	weatherData->SetMeasurementChanged(80.0, 65.0, 30.1);
	//֪ͨ
	weatherData->NotifyObservers();
	
	
	weatherData->SetMeasurementChanged(82.0, 70.0, 29.4);
	weatherData->NotifyObservers();
	
	weatherData->SetMeasurementChanged(78.0, 90.0, 29.4);
	weatherData->NotifyObservers();

	
	system("pause");
	
	return 0;
}