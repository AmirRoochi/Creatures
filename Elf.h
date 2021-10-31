#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
using namespace std;

class Elf :public Creature {
public:
	Elf();
	Elf(int s, int h);
	int GetDamage();
	string GetSpecies();
};
