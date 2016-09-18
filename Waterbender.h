#pragma once
#include "Guerrero.h"
#include <string>

using std::string;

class Waterbender : public Guerrero
{
private:
	double specialAttack;
	bool healing;

public:
	Waterbender();
	~Waterbender();
	Waterbender(string, int, double, double, int, int, double);
	double getSpecialAttack();
	void setSpecialAttack(double);
	string toString();
	Guerrero* attack(Guerrero*);
	bool getHealing();
	Guerrero* recover(Guerrero*);
	Guerrero* attackSpecial(Guerrero*);
};