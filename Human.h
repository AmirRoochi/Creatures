#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
using namespace std;

class Human :public Creature {
public:
	Human();
	Human(int s, int h);
	int GetDamage();
	string GetSpecies();
};
