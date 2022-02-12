#pragma once
#include "Weapon.h"
using namespace std;

class Chainsaw : public Weapon
{
public:
	Chainsaw();
	virtual ~Chainsaw() override;
	virtual void Shoot() override;
	virtual void Reloading() override;
	virtual void ShowWeapon() override;
	int getTankCapacity();
private:
	int tankCapacity = 0;
};
