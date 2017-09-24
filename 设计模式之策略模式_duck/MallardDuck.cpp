#include "MallardDuck.h"
#include<iostream>
#include<string>
#include "Duck.h"
#include "FlyWithWings.h"
#include "QQuack.h"
using namespace std;

MallardDuck::MallardDuck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new QQuack();
}


MallardDuck::~MallardDuck()
{
}

/*
void MallardDuck::PPerformQuack()
{
	PerformQuack(quackBehavior);
}

void MallardDuck::PPerformFly()
{
	PerformFly(flyBehavior);
}
*/
void MallardDuck::Display()
{
	cout << "ÂÌÍ·Ñ¼×Ó¡£¡£¡£¡£¡£¡£" << endl;
}
