#include "Machine.h"
#include<iostream>

Machine::Machine()
{
}

Machine::~Machine()
{
}

void Machine::Shoot()
{
	while (ammo)
	{
		ammo--;
	}
}

void Machine::Reloading()
{
}

void Machine::ShowWeapon()
{
}
