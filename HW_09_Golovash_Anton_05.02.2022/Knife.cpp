#include "Knife.h"
#include<iostream>

Knife::Knife()
{
	cout << "Constructor Knife:\t" << this << endl;
}

Knife::~Knife()
{
	cout << "Destructor Knife:\t" << this << endl;
}

void Knife::Shoot()
{
	cout << "STAB" << endl;
}

void Knife::ShowWeapon()
{
	cout << "Here is my Knife" << endl;
}
