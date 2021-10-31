#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
using namespace std;

class Balrog :public Demon {
public:
	Balrog();
	Balrog(int s, int h);
	int GetDamage();
	string GetSpecies();
};
