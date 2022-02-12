#include "Chainsaw.h"
#include<iostream>

Chainsaw::Chainsaw()
{
	cout << "Constructor Chainsaw:\t" << this << endl;
}

Chainsaw::~Chainsaw()
{
	cout << "Destructor Chainsaw:\t" << this << endl;
}

void Chainsaw::Shoot()
{
	while (tankCapacity)
	{
		cout << "Chainsaw is running" << endl;
	}
}

void Chainsaw::Reloading()
{
	tankCapacity = 100;
	cout << "Chainsaw tank is fool" << endl;
}

void Chainsaw::ShowWeapon()
{
	cout << "Chainsaw in using" << endl;
}

int Chainsaw::getTankCapacity()
{
	return tankCapacity;
}
