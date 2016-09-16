#pragma once
#include "Guerrero.h"
#include <string>

using std::string;

class Airbender : public Guerrero
{
private:
	double specialAttack;

public:
	Airbender();
	Airbender(string, int, double, double, int, int, double);
	~Airbender();
	double getSpecialAttack();
	void setSpecialAttack(double);
	string toString();
	Guerrero* attack(Guerrero*);
};