#pragma once
#include"IObserver.h"
class IObserver;
class ISubject
{
public:
	ISubject();
	~ISubject();
	virtual void RegisterObserver(IObserver* o);//ע��
	virtual void RemoveObserver(IObserver* o);//����
	virtual void NotifyObservers();//֪ͨ
};

