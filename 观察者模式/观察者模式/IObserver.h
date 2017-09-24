#pragma once
class IObserver
{
public:
	IObserver();
	~IObserver();
	virtual void Update(double temp, double huidity, double pressure) = 0;
};


class IDisplayElement
{
public:
	IDisplayElement();
	~IDisplayElement();
	virtual void Display() = 0;
private:

};


