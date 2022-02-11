#pragma once

class Weapon
{
public:
	Weapon();
	virtual ~Weapon();
	virtual void Shoot() = 0;
	virtual void Reloading() = 0;
	virtual void ShowWeapon() = 0;

	int getAmmo();
	void setAmmo(int);
	int getClip();
	void setClip(int);
	int getBarrelLength();
	void setBarrelLength(int);
	int getDamagePower();
	void setDamagePower(int);

protected:
	int ammo = 0;//патроны
	int clip = 0;//обойма
	int barrelLength = 0;//длина ствола
	int damagePower = 0;//сила урона
};

