#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
#include"Creature.h"
#include"Elf.h"
#ifndef Elf_h
#define Elf_h
#endif // !Elf_h

using namespace std;

Elf::Elf() :Creature() {}
Elf::Elf(int s, int h) : Creature(s, h) {}
int Elf::GetDamage() {
	int damage = Creature::GetDamage();
	if ((rand() % 10) == 0) {
		damage = damage * 2;
	}
	return damage;
}
string Elf::GetSpecies() {
	return "Elf";
}