#pragma once
#include "IQuackBehavior.h"
class Squeak :
	public IQuackBehavior
{
public:
	Squeak();
	~Squeak();
	virtual void Quack();
};

