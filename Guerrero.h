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
		int battlesWon;

	public:
		Guerrero();
		Guerrero(string, int, double, double, int, int);
		virtual ~Guerrero();
		string getName();
		void setName(string);
		int getHP();
		void setHP(int);
		double getOffence();
		void setOffence(double);
		double getDefence();
		void setDefence(double);
		int getForce();
		void setForce(int);
		int getLuck();
		void setLuck(int);
		int getBattlesWon();
		void setBattlesWon();
		virtual string toString();
		virtual Guerrero* attack(Guerrero*);
};