#pragma once
class IFlyBehavior
{
public:
	IFlyBehavior();
	~IFlyBehavior();
	virtual void Fly()=0;
};

