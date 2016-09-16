#include "Guerrero.h"
#include "Airbender.h"
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

}

Guerrero* Airbender::attack(Guerrero* warrior) {
	
}