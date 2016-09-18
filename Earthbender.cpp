#include "Guerrero.h"
#include "Earthbender.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using std::string;
using std::cout;
using std::stringstream;

Earthbender::Earthbender() : Guerrero() {
	this -> metallic = false;
}

Earthbender::Earthbender(string name, int HP, double offence, double attack, int force, int luck, double specialAttack) : 
Guerrero(name, HP, offence, attack, force, luck), specialAttack(specialAttack) {
	this -> metallic = false;
	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

Earthbender::~Earthbender() {

}

double Earthbender::getSpecialAttack() {
	return this -> specialAttack;
}

void Earthbender::setSpecialAttack(double specialAttack) {
	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

bool Earthbender::getMetallic() {
	if (force >= 100)
	{
		this -> metallic= true;
	}
	
	return this ->  metallic;
}

string Earthbender::toString() {
	stringstream ss;
	ss << Guerrero::toString() << " Metallic? " << metallic << ", Special Attack strength: " << specialAttack*100 << "%";
	return ss.str();
}

Guerrero* Earthbender::attack(Guerrero* warrior) {
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
		hit = hit * 2;
	}

	warrior -> setHP(warrior -> getHP() - hit);
	return warrior;
}