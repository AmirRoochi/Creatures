#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
using namespace std;

class Cyberdemon :public Demon {
public:
	Cyberdemon();
	Cyberdemon(int s, int h);
	int GetDamage();
	string GetSpecies();
};
