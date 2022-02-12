#include "Gun.h"
#include<iostream>

Gun::Gun()
{
	setDamagePower(5);
	setBarrelLength(6);
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
		cout << "Ammo in your Pistol is - " << getAmmo() << endl;
		cout << "Reload your Gun" << endl;
	}
}

void Gun::Reloading()
{
	setAmmo(15);
}

void Gun::ShowWeapon()
{
	cout << "Here is my Gun" << endl;
}
