#include "WeatherData.h"


WeatherData::WeatherData()
{
	observers = new list<IObserver*>;
}


WeatherData::~WeatherData()
{
}
void WeatherData::RegisterObserver(IObserver* o)//ע��
{
	observers->push_front(o);
}
void WeatherData::RemoveObserver(IObserver* o)//ע��
{

	if (o != NULL)
	{
		observers->remove(o);
	}
}
void WeatherData::NotifyObservers()//֪ͨ
{
	list<IObserver*>::iterator it;
	it = observers->begin();
	for (; it != observers->end(); it++)
	{
		(*it)->Update(temperature,humidity,pressure);
	}

}

void WeatherData::MeasurementChanged()
{
	NotifyObservers();
}

void WeatherData::SetMeasurementChanged(double _temperature, double _humidity, double _pressure)
{
	temperature = _temperature;
	humidity = _humidity;
	pressure = _pressure;
}