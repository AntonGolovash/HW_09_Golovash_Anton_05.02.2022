#include "Machine.h"
#include<iostream>

Machine::Machine()
{
	setDamagePower(25);
	cout << "Constructor Machine:\t" << this << endl;
}

Machine::~Machine()
{
	cout << "Destructor Machine:\t" << this << endl;
}

void Machine::Shoot()
{
	if (ammo)
	{
		cout << "5 shots from Machine" << endl;
		ammo -= 5;
	}
	else
	{
		cout << "Ammo in your Machine is - " << getAmmo() << endl;
		cout << "Reload your Machine" << endl;
	}
}

void Machine::Reloading()
{
	setAmmo(50);
}

void Machine::ShowWeapon()
{
	cout << "Here is my Machine" << endl;
}
