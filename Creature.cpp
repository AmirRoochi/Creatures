#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
#include"Creature.h"
#ifndef Creature_h
#define Creature_h
#endif // !Creature_h

using namespace std;

Creature::Creature() {
	strength = 10;
	hitpoints = 10;
}
Creature::Creature(int s, int h) {
	SetStrength(s);
	SetHitpoints(h);
}
int Creature::GetDamage() {
	int damage;
	damage = (rand() % strength) + 1;
	return damage;
}
void Creature::SetStrength(int s) {
	if (s <= 0) {
		s = 10;
	}
	strength = s;
}
void Creature::SetHitpoints(int h) {
	if (h <= 0) {
		h = 10;
	}
	hitpoints = h;
}
int Creature::GetStrength() {
	return strength;
}
int Creature::GetHitPoints() {
	return hitpoints;
}
string Creature::GetSpecies() {
	return "Creature";
}
Creature::~Creature() {
	cout << "object Destroyed!" << endl;
}
//void Creature::DealDamage(Creature obj1, Creature obj2) {
//	cout << obj1.getSpecies() << "inflicts" << obj1.getDamage();
//	cout << "Damage to" << obj2.getSpecies() << endl;
//	cout << obj2.getSpecies() << "Health is:" << TakeDamage(obj1.getDamage()) << endl;
//}
//int Creature::TakeDamage(int d) {
//	return GetHitPoints() - d;
//
//}//Dealc