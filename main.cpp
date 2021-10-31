#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
#include"Creature.h"
#include"Human.h"
#include"Elf.h"
#include"Demon.h"
#include"Balrog.h"
#include"Cyberdemon.h"
using namespace std;

int main() {
	srand(time(NULL));
	int numCreature;
	cout << "Number of Creatures: " << endl;
	cin >> numCreature;
	Creature *ptr[4];
	ptr[0] = new Human;
	if (ptr[0] == nullptr) {
		cout << "Memory Allocation Failed" << endl;
		exit(EXIT_FAILURE);
	}
	ptr[1] = new Elf;
	if (ptr[1] == nullptr) {
		cout << "Memory Allocation Failed" << endl;
		exit(EXIT_FAILURE);
	}
	ptr[2] = new Balrog;
	if (ptr[2] == nullptr) {
		cout << "Memory Allocation Failed" << endl;
		exit(EXIT_FAILURE);
	}
	ptr[3] = new Cyberdemon;
	if (ptr[3] == nullptr) {
		cout << "Memory Allocation Failed" << endl;
		exit(EXIT_FAILURE);
	}

	//Creature **ptr = new(nothrow) Creature*[numCreature];
	//if (ptr == nullptr) {
	//	cout << "Memory Allocation Failed!" << endl;
	//	exit(EXIT_FAILURE);
	//}

	//ptr[0] = h1;
	//ptr[1] = e1;
	//ptr[2] = b1;
	//ptr[3] = c1;
	for (int i = 0; i < 4; i++) {
		cout << ptr[i]->GetSpecies() << " Damage= " << ptr[i]->GetDamage() << " Hitpoints= " << ptr[i]->GetHitPoints() <<
			" Strength= " << ptr[i]->GetStrength() << endl;
		delete ptr[i];
	}
	/*cout << ptr[0]->GetSpecies() << " Damage= " << ptr[0]->GetDamage() << " Hitpoints= " << ptr[0]->GetHitPoints() <<
		" Strength= " << ptr[0]->GetStrength() << endl;
	delete ptr[0];
	cout << ptr[1]->GetSpecies() << " Damage= " << ptr[1]->GetDamage() << " Hitpoints= " << ptr[1]->GetHitPoints() <<
		" Strength= " << ptr[1]->GetStrength() << endl;
	delete ptr[1];
	cout << ptr[2]->GetSpecies() << " Damage= " << ptr[2]->GetDamage() << " Hitpoints= " << ptr[2]->GetHitPoints() <<
		" Strength= " << ptr[2]->GetStrength() << endl;
	delete ptr[2];
	cout << ptr[3]->GetSpecies() << " Damage= " << ptr[3]->GetDamage() << " Hitpoints= " << ptr[3]->GetHitPoints() <<
		" Strength= " << ptr[3]->GetStrength() << endl;
	delete ptr[3];*/
}
//Number of Creatures :
//4
//Human Damage = 2 Hitpoints = 10 Strength = 10
//object Destroyed!
//Elf Damage = 2 Hitpoints = 10 Strength = 10
//object Destroyed!
//Balrog Damage = 9 Hitpoints = 10 Strength = 10
//object Destroyed!
//Cyberdemon Damage = 5 Hitpoints = 10 Strength = 10
//object Destroyed!
//Press any key to continue . . .