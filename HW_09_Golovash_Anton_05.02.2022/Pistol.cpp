#include "Pistol.h"
#include<iostream>

Pistol::Pistol()
{
	setDamagePower(5);
	setBarrelLength(4);
	cout << "Constructor Pistol:\t" << this << endl;
}

Pistol::~Pistol()
{
	cout << "Destructor Pistol:\t" << this << endl;
}

void Pistol::Shoot()
{
	if (ammo)
	{
		cout << "1 shot from Pistol" << endl;
		ammo--;
		cout << "Ammo in your Pistol is - " << getAmmo() << endl;
	}
	else
	{
		cout << "Ammo in your Pistol is - " << getAmmo() << endl;
		cout << "Reload your Pistol" << endl;
	}
}

void Pistol::Reloading()
{
	setAmmo(5);
}

void Pistol::ShowWeapon()
{
	cout << "Here is my Pistol" << endl;
}