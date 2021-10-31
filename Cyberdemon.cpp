#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string>
#include"Creature.h"
#include"Demon.h"
#include"Cyberdemon.h"
#ifndef Cyberdemon_h
#define Cyberdemon_h
#endif // !Cyberdemon_h

using namespace std;

Cyberdemon::Cyberdemon() :Demon() {}
Cyberdemon::Cyberdemon(int s, int h) : Demon(s,h) {}
int Cyberdemon::GetDamage() {
	return Demon::GetDamage();

}
string Cyberdemon::GetSpecies() {
	return "Cyberdemon";
}