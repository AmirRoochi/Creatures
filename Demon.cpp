#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
#include"Creature.h"
#include"Demon.h"
#ifndef Demon_h
#define Demon_h
#endif // !Demon_h

using namespace std;

Demon::Demon() :Creature() {}
Demon::Demon(int s, int h) : Creature(s, h) {}
int Demon::GetDamage() {
	int damage = Creature::GetDamage();
	if ((rand() % 100) < 5)
		damage = damage + 50;
	return damage;
}
string Demon::GetSpecies() {
	return "Demon";
}