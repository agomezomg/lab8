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
	~Firebender();
	Guerrero* attack(Guerrero*);
	double getSpecialAttack();
	void setSpecialAttack(double);
	
};