#include "Guerrero.h"
#include "Earthbender.h"
#include "Airbender.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using std::string;
using std::cout;
using std::stringstream;

Earthbender::Earthbender() : Guerrero() {

}

Earthbender::Earthbender(string name, int HP, double offence, double attack, int force, int luck, double specialAttack) : 
Guerrero(name, HP, offence, attack, force, luck), specialAttack(specialAttack) {
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

string Earthbender::toString() {
	stringstream ss;
	ss << Guerrero::toString() << ", Special Attack strength: " << specialAttack*100 << "%";
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
		cout << "SMAAAAAAAAAAAAAAAAAASH! \n";
		hit = hit * 2;
	}

	if (dynamic_cast<Airbender*>(warrior) != NULL)
	{
		Airbender* temp = dynamic_cast<Airbender*>(warrior);
		hit = hit + (hit * 0.25);

	}

	if (hit  < 0)
	{
		hit = hit * -1;
	}

	cout << name << " deals damage of " << hit << "! \n";

	warrior -> setHP(warrior -> getHP() - hit);
	return warrior;
}

Guerrero* Earthbender::attackSpecial(Guerrero* warrior) {
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
	
	int hit = (warrior -> getHP() * specialAttack) - (warrior -> getDefence() * warrior -> getHP());
	
	if (iSecret == 50)
	{
		cout << "SMAAAAAAAAAAAAAAAAAASH! \n";
		hit = hit * 2;
	}

	if (dynamic_cast<Airbender*>(warrior) != NULL)
	{
		Airbender* temp = dynamic_cast<Airbender*>(warrior);
		hit = hit + (hit * 0.25);

	}

	if (hit  < 0)
	{
		hit = hit * -1;
	}

	cout << name << " deals damage of " << hit << "! \n";

	warrior -> setHP(warrior -> getHP() - hit);
	return warrior;
}