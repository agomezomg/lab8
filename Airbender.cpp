#include "Guerrero.h"
#include "Airbender.h"
#include "Firebender.h"
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using std::string;
using std::cout;
using std::stringstream;

Airbender::Airbender() : Guerrero() {

}

Airbender::Airbender(string name, int HP, double offence, double attack, int force, int luck, double specialAttack) : 
Guerrero(name, HP, offence, attack, force, luck), specialAttack(specialAttack) {
	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

Airbender::~Airbender() {

}

double Airbender::getSpecialAttack() {
	return this -> specialAttack;
}

void Airbender::setSpecialAttack(double specialAttack) {
	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

string Airbender::toString() {
	stringstream ss;
	ss << Guerrero::toString() << ", Special Attack strength: " << specialAttack*100 << "%";
	return ss.str();
}

Guerrero* Airbender::attack(Guerrero* warrior) {
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

	if (dynamic_cast<Firebender*>(warrior) != NULL)
	{
		Firebender* temp = dynamic_cast<Firebender*>(warrior);
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

Guerrero* Airbender::attackSpecial(Guerrero* warrior) {
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

	if (dynamic_cast<Firebender*>(warrior) != NULL)
	{
		Firebender* temp = dynamic_cast<Firebender*>(warrior);
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