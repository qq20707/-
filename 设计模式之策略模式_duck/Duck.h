#pragma once
#include "IFlyBehavior.h"
#include "IQuackBehavior.h"
class Duck
{
public:
	Duck();
	~Duck();
	virtual void Display();
	void PerformQuack();
	void PerformFly();
	void Swim();
protected:
	IQuackBehavior *quackBehavior;
	IFlyBehavior *flyBehavior;
};

