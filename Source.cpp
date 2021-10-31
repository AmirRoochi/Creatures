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
	inline int GetStrength(); 
	inline int GetHitPoints(); 
	virtual int GetDamage();
	inline virtual string GetSpecies()=0; 
	/*void DealDamage(Creature, Creature);
	int TakeDamage(int);*/
};
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
string Creature::GetSpecies(){
	return "Creature";
}
Creature::~Creature() {}
//void Creature::DealDamage(Creature obj1, Creature obj2) {
//	cout << obj1.getSpecies() << "inflicts" << obj1.getDamage();
//	cout << "Damage to" << obj2.getSpecies() << endl;
//	cout << obj2.getSpecies() << "Health is:" << TakeDamage(obj1.getDamage()) << endl;
//}
//int Creature::TakeDamage(int d) {
//	return GetHitPoints() - d;
//
//}//Deal
class Human :public Creature {
public:
	Human();
	Human(int s, int h);
	int GetDamage(); 
	string GetSpecies(); 
};
Human::Human() :Creature(){}
Human::Human(int s, int h):Creature(s,h){}
int Human::GetDamage() {
	int damage=Creature::GetDamage();
	return damage;
}
string Human::GetSpecies() {
	return "Human";
}
class Demon :public Creature {
public:
	Demon(); 
	Demon(int s, int h); 
	int GetDamage();
	string GetSpecies(); 
};
Demon::Demon():Creature(){}
Demon::Demon(int s, int h):Creature(s,h){}
int Demon::GetDamage(){
		int damage = Creature::GetDamage();
		if ((rand() % 100) < 5)
			damage = damage + 50;
		return damage;
}
string Demon::GetSpecies() {
	return "Demon";
}
class Elf :public Creature {
public:
	Elf();
	Elf(int s, int h);
	int GetDamage();
	string GetSpecies();
};
Elf::Elf() :Creature(){}
Elf::Elf(int s, int h) :Creature(s,h){}
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
class Cyberdemon :public Demon {
public:
	Cyberdemon();
	Cyberdemon(int s, int h);
	int GetDamage();
	string GetSpecies();
};
Cyberdemon::Cyberdemon() :Demon(){}
Cyberdemon::Cyberdemon(int s, int h) :Demon(){}
int Cyberdemon::GetDamage() {
	int damage=Demon::GetDamage();
	return damage;
}
string Cyberdemon::GetSpecies() {
	return "Cyberdemon";
}
class Balrog :public Demon {
public:
	Balrog();
	Balrog(int s, int h);
	int GetDamage();
	string GetSpecies();
};
Balrog::Balrog() :Demon(){}
Balrog::Balrog(int s, int h) :Demon(){}
int Balrog::GetDamage() {
	int damage = Demon::GetDamage();
	int damage2 = (rand() % Demon::GetStrength()) + 1;
	damage = damage + damage2;
	return damage;
}
string Balrog::GetSpecies() {
	return "Balrog";
}
int main() {
	srand(time(NULL));
	int numCreature;
	cout << "Enter number of creatures: " ;
	cin >> numCreature;
	Human *h1=new Human(13,18);
	Elf *e1=new Elf(15,30);
	Balrog *b1=new Balrog;
	Cyberdemon *c1=new Cyberdemon;

	Creature **ptr = new Creature*[numCreature];

	ptr[0] = h1;
	ptr[1] = e1;
	ptr[2] = b1;
	ptr[3] = c1;
	cout << ptr[0]->GetSpecies() << ptr[0]->GetStrength() << ptr[0]->GetDamage() << endl;
	cout << ptr[1]->GetSpecies() << ptr[1]->GetStrength() << ptr[1]->GetDamage() << endl;
	
	
	

	
}