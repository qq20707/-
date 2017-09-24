#pragma once
#include"IObserver.h"
class IObserver;
class ISubject
{
public:
	ISubject();
	~ISubject();
	virtual void RegisterObserver(IObserver* o);//×¢²á
	virtual void RemoveObserver(IObserver* o);//Ïú»Ù
	virtual void NotifyObservers();//Í¨Öª
};

