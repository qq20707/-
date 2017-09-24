#pragma once
#include "IQuackBehavior.h"
class QQuack :
	public IQuackBehavior
{
public:
	QQuack();
	~QQuack();
	virtual  void Quack();
};

