#include "Chainsaw.h"
#include<iostream>

Chainsaw::Chainsaw()
{
	setDamagePower(20);
	cout << "Constructor Chainsaw:\t" << this << endl;
}

Chainsaw::~Chainsaw()
{
	cout << "Destructor Chainsaw:\t" << this << endl;
}

void Chainsaw::Shoot()
{
	if (fuel)
	{
		fuel -= 10;
		cout << "Chainsaw is running" << endl;
	}
	else
	{
		cout << "Fuel in chainsaw tank is - " << getFuel() << endl;
		cout << "Add fuel in chainsaw tank" << endl;
	}
}

void Chainsaw::Reloading()
{
	fuel = 100;
	cout << "Chainsaw tank is fool" << endl;
}

void Chainsaw::ShowWeapon()
{
	cout << "Chainsaw in using" << endl;
}

int Chainsaw::getFuel()
{
	return fuel;
}
