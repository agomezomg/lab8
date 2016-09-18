#pragma once
#include "Guerrero.h"
#include <string>

using std::string;

class Earthbender : public Guerrero
{
private:
	double specialAttack;
	
public:
	Earthbender();
	~Earthbender();
	Earthbender(string, int, double, double, int, int, double);
	double getSpecialAttack();
	void setSpecialAttack(double);
	string toString();
	Guerrero* attack(Guerrero*);	
	Guerrero* attackSpecial(Guerrero*);
};