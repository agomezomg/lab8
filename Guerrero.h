#pragma once
#include <string>

using std::string;

class Guerrero {
	protected:
		string name;
		int HP;
		double offence;
		double defence;
		int force;
		int luck;

	public:
		Guerrero();
		Guerrero();
		Guerrero(string, int, double, double, int, int);
		string getName();
		void setName(string);
		int getHP();
		void setHP();
		double getOffence();
		void setOffence();
		double getDefence();
		void setDefence();
		int getForce();
		void setForce();
		int getLuck();
		void setLuck();
		string toString();
};