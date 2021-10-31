#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
using namespace std;

class Creature {
private:
	int strength;
	int hitpoints;

public:
	Creature();
	Creature(int s, int h);
	void SetStrength(int s);
	void SetHitpoints(int h);
	virtual ~Creature();
	inline virtual int GetStrength();
	inline virtual int GetHitPoints();
	virtual int GetDamage();
	virtual string GetSpecies()=0;
	/*void DealDamage(Creature, Creature);
	int TakeDamage(int);*/
};
