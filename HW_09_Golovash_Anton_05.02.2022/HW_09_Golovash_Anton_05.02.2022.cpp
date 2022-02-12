#include "Weapon.h"
//#include "Weapon.cpp"
#include "Pistol.h"
//#include "Pistol.cpp"
#include "Machine.h"
//#include "Machine.cpp"
#include "Knife.h"
//#include "Knife.cpp"
#include "Gun.h"
//#include "Gun.cpp"
#include "Chainsaw.h"
//#include "Chainsaw.cpp"
#include<iostream>

using namespace std;

void main()
{
	Pistol pistol;
	Machine machine;
	Knife knife;
	Gun gun;
	Chainsaw chainsaw;

	pistol.Reloading();
	pistol.Shoot();
	pistol.Shoot();
	pistol.Shoot();
	pistol.Shoot();
	pistol.Shoot();
	pistol.Shoot();
	pistol.Reloading();
	pistol.Shoot();
	cout << "Pistol barrel length - " << pistol.getBarrelLength() << endl;
	
	machine.Reloading();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Shoot();
	machine.Reloading();
	machine.Shoot();
	machine.Shoot();
	cout << "Machine barrel length - " << machine.getBarrelLength() << endl;

	knife.Shoot();
	knife.Shoot();
	knife.Shoot();
	knife.Shoot();
	knife.Shoot();
	knife.getDamagePower();
	cout << "Knife damage power - " << knife.getDamagePower() << endl;

	cout << "Gun ammo - " << gun.getAmmo() << endl;
	cout << "Gun barrel length - " << gun.getBarrelLength() << endl;
	cout << "Gun damage power - " << gun.getDamagePower() << endl;
	gun.Reloading();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Shoot();
	gun.Reloading();
	gun.Shoot();

	system("pause");
}
