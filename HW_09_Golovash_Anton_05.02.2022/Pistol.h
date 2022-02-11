#pragma once
#include "Weapon.h"
using namespace std;

class Pistol : public Weapon
{
public:
	Pistol();
	virtual ~Pistol() override;
	virtual void Shoot() override;
	virtual void Reloading() override;
	virtual void ShowWeapon() override;

};

