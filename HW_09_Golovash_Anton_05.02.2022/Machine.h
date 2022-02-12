#pragma once
#include "Weapon.h"
using namespace std;

class Machine : public Weapon
{
public:
	Machine();
	virtual ~Machine() override;
	virtual void Shoot() override;
	virtual void Reloading() override;
	virtual void ShowWeapon() override;
};
