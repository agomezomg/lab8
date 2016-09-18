#include "Guerrero.h"
#include "Firebender.h"
#include "Waterbender.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>

using namespace std;

Firebender::Firebender() : Guerrero() {

}

Firebender::~Firebender() {

}

Firebender::Firebender(string name, int HP, double offence, double attack, int force, int luck, double specialAttack) : 
Guerrero(name, HP, offence, attack, force, luck), specialAttack(specialAttack) {
	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

double Firebender::getSpecialAttack() {
	return this -> specialAttack;
}

void Firebender::setSpecialAttack(double specialAttack) {
	if(specialAttack > 1) {
		this -> specialAttack = specialAttack/100;
	} else if (specialAttack > 0 && specialAttack < 1) {
		this -> specialAttack = specialAttack;
	} else {
		cout << "No changes \n";
	}
}

string Firebender::toString() {
	stringstream ss;
	ss << Guerrero::toString() << ", Special Attack strength: " << specialAttack*100 << "%";
	return ss.str();
}

Guerrero* Firebender::attack(Guerrero* warrior) {
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
	
	int hit = (warrior -> getHP() * this -> offence) - (warrior -> getDefence() * warrior -> getHP());
	
	if (iSecret == 50)
	{
		cout << "SMAAAAAAAAAAAAAAAAAASH! \n";
		hit = hit * 2;
	}

	if (dynamic_cast<Waterbender*>(warrior) != NULL)
	{
		Waterbender* temp = dynamic_cast<Waterbender*>(warrior);
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

Guerrero* Firebender::attackSpecial(Guerrero* warrior) {
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
	
	int hit = (warrior -> getHP() * this -> specialAttack) - (warrior -> getDefence() * warrior -> getHP());
	
	if (iSecret == 50)
	{
		cout << "SMAAAAAAAAAAAAAAAAAASH! \n";
		hit = hit * 2;
	}

	if (dynamic_cast<Waterbender*>(warrior) != NULL)
	{
		Waterbender* temp = dynamic_cast<Waterbender*>(warrior);
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