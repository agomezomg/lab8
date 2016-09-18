#include "Guerrero.h"
#include "Waterbender.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

Waterbender::Waterbender() : Guerrero() {
	this -> healing = false;
}

Waterbender::~Waterbender() {

}

Waterbender::Waterbender(string name, int HP, double offence, double attack, int force, int luck, double specialAttack) : 
Guerrero(name, HP, offence, attack, force, luck), specialAttack(specialAttack) {
	this -> healing = false;

	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

double Waterbender::getSpecialAttack() {
	return this -> specialAttack;
}

void Waterbender::setSpecialAttack(double specialAttack) {
	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

bool Waterbender::getHealing() {
	if (force >= 100)
	{
		this -> healing = true;
	}

	return this -> healing;
}

string Waterbender::toString() {
	stringstream ss;
	ss << Guerrero::toString() << " Healing? " << healing << ", Special Attack strength: " << specialAttack*100 << "%";
	return ss.str();
}

Guerrero* Waterbender::attack(Guerrero* warrior) {
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

	if (dynamic_cast<Waterbender*>(warrior) != NULL)
	{
		Waterbender* temp = dynamic_cast<Waterbender*>(warrior);
		hit = hit + (hit * 0.25);
	}
	
	if (iSecret == 50)
	{
		hit = hit * 2;
	}

	warrior -> setHP(warrior -> getHP() - hit);
	return warrior;
}