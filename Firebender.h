#pragma once
#include "Guerrero.h"
#include <string>

using std::string;

class Firebender : public Guerrero
{
private:
	double specialAttack;

public:
	Firebender();
	Firebender(string, int, double, double, int, int, double);
	~Firebender();
	double getSpecialAttack();
	void setSpecialAttack(double);
	string toString();
	Guerrero* attack(Guerrero*);
	Guerrero* attackSpecial(Guerrero*);
};