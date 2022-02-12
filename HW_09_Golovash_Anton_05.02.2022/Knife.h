#pragma once
#include "Weapon.h"
using namespace std;

class Knife : public Weapon
{
public:
	Knife();
	virtual ~Knife() override;
	virtual void Shoot() override;
	virtual void Reloading() override;
	virtual void ShowWeapon() override;
};

