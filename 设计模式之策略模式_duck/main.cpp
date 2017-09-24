#include<iostream>
#include<string>
#include "MallardDuck.h"
#include "WoodDuck.h"

#include "Duck.h"
#include "FlyWithWings.h"
#include "QQuack.h"

using namespace std;

int main()
{
	MallardDuck  mallard;
	//FlyWithWings *flyBehavior = new FlyWithWings();
	//QQuack *quackBehavior = new QQuack();
	mallard.Display();
	mallard.PerformFly();
	mallard.PerformQuack();
	mallard.Swim();
	cout << endl;
	cout << "=======" << endl;
	WoodDuck *woodduck =new WoodDuck();

	woodduck->Display();
	woodduck->PerformFly();
	woodduck->PerformQuack();
	woodduck->Swim();

	system("pause");
}