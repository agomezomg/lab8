#include <sstream>
#include "Guerrero.h"
#include  <string>
#include <iostream>
#include "Airbender.h"
#include "Waterbender.h"
#include "Firebender.h"
#include "Earthbender.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>

using std::string;
using std::stringstream;
using std::cout;

Guerrero::Guerrero() {
	this -> battlesWon = 0;
}

Guerrero::Guerrero(string name, int HP, double offence, double defence, int force, int luck) : name(name), HP(HP) {
	this -> battlesWon = 0;

	if(offence > 1) {
		this -> offence = offence/100;
	} else if (offence > 0 && offence < 1) {
		this -> offence = offence;
	} else {
		cout << "incorrect values, setting offence to 10 \n";
		this -> offence = 0.1;
	}

	if(defence > 1) {
		this -> defence = defence/100;
	} else if (defence > 0 && defence < 1) {
		this -> defence = defence;
	} else {
		cout << "incorrect values, setting defence to 10 \n";
		this -> defence = 0.1;
	}

	if(force > 60 || force < 0) {
		cout << "value not permitted, setting force to max lvl...\n";
		this -> force = 60;
	}

	if(luck < 0 || luck > 10) {
		cout << "value not permitted, setting luck to min lvl...\n";
		this -> luck = 0;
	}
}

Guerrero::~Guerrero() {

}

string Guerrero::getName() {
	return this -> name;
}


void Guerrero::setName(string name) {
	this -> name = name;
}

int Guerrero::getHP() {
	return this -> HP;
}

void Guerrero::setHP(int HP) {
	
	this -> HP = HP;
}

double Guerrero::getOffence() {
	return this -> offence;
}

void Guerrero::setOffence(double offence) {
	if(offence > 1) {
		this -> offence = offence/100;
	} else if (offence > 0 && offence < 1) {
		this -> offence = offence;
	} else {
		cout << "No changes \n";
	}
}

double Guerrero::getDefence() {
	return this -> defence;
}

void Guerrero::setDefence(double defence) {
	if(defence > 1) {
		this -> defence = defence/100;
	} else if (defence > 0 && defence < 1) {
		this -> defence = defence;
	} else {
		cout << "No changes \n";
	}
}

int Guerrero::getForce() {
	return this -> force;
}

void Guerrero::setForce(int force) {
	if (force < 0 || force > 50) {
		cout << "No changes. \n";
	} else {
		this -> force = force;
	}
}

int Guerrero::getLuck() {
	return this -> luck;
}

void Guerrero::setLuck(int luck) {
	if(luck < 0 || luck > 10) {
		cout << "No changes. \n";
	} else {
		this -> luck = luck;
	}
}

string Guerrero::toString() {
	stringstream ss;
	ss << "Guerrero: " << name << "\n";
	ss << "HP: " << HP << "\n";
	return ss.str();
}

Guerrero* Guerrero::attack(Guerrero* warrior) {
	int iSecret;

	if (luck < 5)
	{
		iSecret = rand() % 10000 + 1;
	} else if (luck > 5 && luck < 10)
	{
		iSecret = rand() % 1000 + 1;
	} else {
		iSecret = rand() % 100 + 1;
	}
	
	int hit = (warrior -> getHP() * offence) - (warrior -> getDefence() * warrior -> getHP());
	
	if (iSecret == 50)
	{
		cout << "SMAAAAAAAAAAAAAAAAAASH! \n";
		hit = hit * 2;
	}
	
	if (hit  < 0)
	{
		hit = hit * -1;
	}

	cout << name << " deals damage of " << hit << "! \n";
	
	warrior -> setHP(warrior -> getHP() - hit);
	return warrior;
}

int Guerrero::getBattlesWon() {
	return this -> battlesWon;
}

void Guerrero::setBattlesWon(Guerrero* defeated) {
	this -> force = ceil(defeated -> getHP() * 0.25);
	this -> battlesWon += 1;
}

/*if (dynamic_cast<Airbender*>(warrior) != NULL)
	{
		Airbender* temp = dynamic_cast<Airbender*>(warrior);

	} else if (dynamic_cast<Waterbender*> warrior != NULL)
	{
		Waterbender* temp = dynamic_cast<Airbender*>(warrior);
	} else if (dynamic_cast<Earthbender*>(warrior) != NULL)
	{
		Earthbender* temp = dynamic_cast<Airbender*>(warrior);
	} else if (dynamic_cast<Firebender*>(warrior) != NULL)
	{
		Firebender* temp = dynamic_cast<Airbender*>(warrior);
	}*/