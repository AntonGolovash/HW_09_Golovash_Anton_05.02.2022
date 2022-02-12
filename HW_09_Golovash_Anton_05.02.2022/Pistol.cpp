#include "Pistol.h"
#include<iostream>

Pistol::Pistol()
{
}

Pistol::~Pistol()
{
}

void Pistol::Shoot()
{
	while (ammo)
	{
		ammo--;
	}
}

void Pistol::Reloading()
{
}

void Pistol::ShowWeapon()
{
}
