#pragma once
#include "Weapon.h"
using namespace std;

class Gun : public Weapon
{
public:
	Gun();
	virtual ~Gun() override;
	virtual void Shoot() override;
	virtual void Reloading() override;
	virtual void ShowWeapon() override;
};

