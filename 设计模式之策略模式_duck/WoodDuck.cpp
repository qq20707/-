#include<iostream>
#include<string>
#include "WoodDuck.h"
#include "Duck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"
using namespace std;
WoodDuck::WoodDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new MuteQuack();
}


WoodDuck::~WoodDuck()
{

}

void WoodDuck::Display()
{
	cout << "直遊兌徨。。。。。。" << endl;
}