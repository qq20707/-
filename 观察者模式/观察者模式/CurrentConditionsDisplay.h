#pragma once
#include "IObserver.h"
#include "WeatherData.h"
#include "ISubject.h"
#include <iostream>
using namespace std;
class ISubject;
class CurrentConditionsDisplay :
	public IObserver, public IDisplayElement
{
public:
	CurrentConditionsDisplay();
	CurrentConditionsDisplay(ISubject *_weatherData);
	~CurrentConditionsDisplay();
	void Update(double _temp, double _humidity, double _pressure);
	void Display();
private:
	double temperature;
	double humidity;
	ISubject *weatherData;
};

