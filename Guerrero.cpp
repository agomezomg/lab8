#include <sstream>
#include "Guerrero.h"
#include  <string>
#include <iostream>

using std::string;
using std::stringstream;
using std::cout;

Guerrero::Guerrero() {

}

Guerrero::Guerrero(string name, int HP, double offence, double defence, int force, int luck) : name(name), HP(HP) {
	if(offence > 1) {
		this -> offence = offence/100;
	} else if (offence > 0 && offence < 1) {
		this -> offence = offence;
	} else {
		cout << "incorrect values, setting offence to 10";
		this -> offence = 0.1;
	}

	if(force > 50 || force < 0) {
		cout << "value not permitted, setting force to max lvl...";
		this -> force = 50;
	}

	if(luck < 0 || luck > 10) {
		cout << "value not permitted, setting luck to min lvl...";
		this -> luck = 0;\
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