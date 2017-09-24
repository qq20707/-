#pragma once
#include "IQuackBehavior.h"
class MuteQuack :
	public IQuackBehavior
{
public:
	MuteQuack();
	~MuteQuack();
	virtual void Quack();
};

