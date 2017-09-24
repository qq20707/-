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
	virtual void RegisterObserver(IObserver* o);//ע��
	virtual void RemoveObserver(IObserver* o);
	virtual void NotifyObservers();
	virtual void MeasurementChanged();
	virtual void SetMeasurementChanged(double _temperature, double _humidity, double _pressure);
private:
	list <IObserver*> *observers; //����һ��list ����¼�۲���
	double temperature;
	double humidity;
	double pressure;
};

