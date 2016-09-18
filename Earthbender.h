#pragma once
#include "Guerrero.h"
#include <string>

using std::string;

class Earthbender : public Guerrero
{
private:
	double specialAttack;
	bool metallic;

public:
	Earthbender();
	~Earthbender();
	Earthbender(string, int, double, double, int, int, double);
	double getSpecialAttack();
	void setSpecialAttack(double);
	bool getMetallic();
	string toString();
	Guerrero* attack(Guerrero*);	
};