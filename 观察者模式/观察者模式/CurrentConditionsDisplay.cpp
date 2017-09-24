#include "CurrentConditionsDisplay.h"


CurrentConditionsDisplay::CurrentConditionsDisplay()
{
}
CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject *_weatherData)
{
	weatherData = _weatherData;
	weatherData->RegisterObserver(this);
}
CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
}
void CurrentConditionsDisplay::Display()
{
	cout << "Current conditions:" << temperature << " F degrees and " << humidity << " % humidity" << endl;
}
void CurrentConditionsDisplay::Update(double _temp, double _humidity, double _pressure)
{
	temperature = _temp;
	humidity = _humidity;
	Display();
}

