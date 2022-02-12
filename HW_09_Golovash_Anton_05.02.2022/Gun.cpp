#include "Gun.h"
#include<iostream>

Gun::Gun()
{
	cout << "Constructor Gun:\t" << this << endl;
}

Gun::~Gun()
{
	cout << "Destructor Gun:\t" << this << endl;
}

void Gun::Shoot()
{
	if (ammo)
	{
		cout << "One shot from Gun" << endl;
		ammo--;
	}
	else
	{
		cout << "Reload your Gun" << endl;
	}
}

void Gun::Reloading()
{
	ammo = 7;
}

void Gun::ShowWeapon()
{
	cout << "There is my Gun" << endl;

}
