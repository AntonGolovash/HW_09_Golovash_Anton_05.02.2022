#include<iostream>
#include "Weapon.h"
using namespace std;

Weapon::Weapon()
{
	cout << "Constructor base Weapon:\t" << this << endl;
}

Weapon::~Weapon()
{
	cout << "Destructor base Weapon:\t" << this << endl;
}

int Weapon::getAmmo()
{
	return ammo;
}

void Weapon::setAmmo(int ammo)
{
	this->ammo = ammo;
}

int Weapon::getClip()
{
	return clip;
}

void Weapon::setClip(int clip)
{
	this->clip = clip;;
}

int Weapon::getBarrelLength()
{
	return barrelLength;
}

void Weapon::setBarrelLength(int barrelLength)
{
	this->barrelLength = barrelLength;
}

int Weapon::getDamagePower()
{
	return damagePower;
}

void Weapon::setDamagePower(int damagePower)
{
	this->damagePower = damagePower;
}
