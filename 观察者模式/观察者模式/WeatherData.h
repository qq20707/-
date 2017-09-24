#pragma once
#include "ISubject.h"
#include "IObserver.h"
#include <list>
using namespace std;

class IObserver;
class WeatherData :
	public ISubject
{
public:
	WeatherData();
	~WeatherData();
	virtual void RegisterObserver(IObserver* o);//注册
	virtual void RemoveObserver(IObserver* o);
	virtual void NotifyObservers();
	virtual void MeasurementChanged();
	virtual void SetMeasurementChanged(double _temperature, double _humidity, double _pressure);
private:
	list <IObserver*> *observers; //增加一个list 来记录观察者
	double temperature;
	double humidity;
	double pressure;
};

