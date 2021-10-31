#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
#include"Creature.h"
#include"Demon.h"
#include"Balrog.h"
#ifndef Demon_h
#define Demon_h
#endif // !Demon_h

#ifndef Balrog_h
#define Balrog_h
#endif // !Balrog_h

using namespace std;

Balrog::Balrog() :Demon() {}
Balrog::Balrog(int s, int h) : Demon() {}
int Balrog::GetDamage() {
	int damage = Demon::GetDamage();
	int damage2 = (rand() % Demon::GetStrength()) + 1;
	damage = damage + damage2;
	return damage;
}
string Balrog::GetSpecies() {
	return "Balrog";
}