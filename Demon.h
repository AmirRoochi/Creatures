#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
using namespace std;

class Demon :public Creature {
public:
	Demon();
	Demon(int s, int h);
	int GetDamage();
	string GetSpecies();
};
