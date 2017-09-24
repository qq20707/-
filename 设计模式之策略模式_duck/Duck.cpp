#include "Duck.h"
#include<iostream>
#include<string>
using namespace std;

Duck::Duck()
{
}


Duck::~Duck()
{
}
void Duck::Display()
{
	cout << "Duck。。。";
}

void Duck::PerformQuack()
{
	quackBehavior->Quack();
}
void Duck::PerformFly()
{
	flyBehavior->Fly();
}


void Duck::Swim()
{
	cout << "氏嗄咯。。。。。"<<endl;
}