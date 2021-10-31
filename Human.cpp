#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
#include"Creature.h"
#include"Human.h"
#ifndef Human_h
#define Human_h
#endif // !Human_h

using namespace std;

Human::Human() :Creature() {}
Human::Human(int s, int h) : Creature(s, h) {}
int Human::GetDamage() {
	int damage = Creature::GetDamage();
	return damage;
}
string Human::GetSpecies() {
	return "Human";
}