#pragma once
#include "Guerrero.h"
#include <string>

using std::string;

class Firebender : public Guerrero
{
private:
	double specialAttack;
	bool electric;

public:
	Firebender();
	Firebender(string, int, double, double, int, int, double);
	~Firebender();
	double getSpecialAttack();
	void setSpecialAttack(double);
	bool getElectric();
	string toString();
	Guerrero* attack(Guerrero*);
};