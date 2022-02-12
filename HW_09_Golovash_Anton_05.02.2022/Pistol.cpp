#include "Pistol.h"
#include<iostream>

Pistol::Pistol()
{
	setDamagePower(5);
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
	}
	else
	{
		cout << "Ammo in your Gun is - " << getAmmo() << endl;
		cout << "Reload your Pistol" << endl;
	}
}

void Pistol::Reloading()
{
	setAmmo(7);
}

void Pistol::ShowWeapon()
{
	cout << "Here is my Pistol" << endl;
}