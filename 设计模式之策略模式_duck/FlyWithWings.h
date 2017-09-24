#pragma once
#include "IFlyBehavior.h"
class FlyWithWings :
	public IFlyBehavior
{
public:
	FlyWithWings();
	~FlyWithWings();
	virtual void Fly();
};

