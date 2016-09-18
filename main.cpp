#include <iostream>
#include "Guerrero.h"
#include "Firebender.h"
#include "Waterbender.h"
#include "Earthbender.h"
#include "Airbender.h"
#include <string>
#include <vector>
#include <exception>

using namespace std;

void fight(Guerrero*, Guerrero*);

int main() {
	vector<Guerrero*> army;
	army.push_back(new Firebender("Zuko", 120, 15, 30, 60, 9, 40));
	army.push_back(new Airbender("Tenzin", 200, 20, 10, 50, 10, 25));
	army.push_back(new Waterbender("Katara", 110, 20, 15, 60, 7, 0.3));
	army.push_back(new Earthbender("Toph", 150, 60, 60, 60, 1, 75));
	army.push_back(new Guerrero("Sokka", 200, 50, 50, 50, 1)); //lol

	int option;

	do
	{
		cout << "1. Register new warrior. \n";
		cout << "2. Tend to warrior (modificar y recuperar HP). \n";
		cout << "3. Remove warrior. \n";
		cout << "4. FIGHT! \n";
		cout << "5. Quit. \n";
		cout << "6. See your warriors \n";

		cin >> option;

		if (option == 1)
		{
			string name;
			int choice, HP, force, luck;
			double offence, defence, specialAttack;

			cout << "1. Regular warrior \n";
			cout << "2. Airbender \n";
			cout << "3. Waterbender \n";
			cout << "4. Earthbender \n";
			cout << "5. Firebender \n";

			cin >> choice;

			if (choice == 1) //Reg warrior
			{
				cout << "Name: ";
				cin >> name;
				cout << "HP: ";
				cin >> HP;
				cout << "Offence (valid in whole numbers or decimals (0.smth), no unexpected tokens please [%] \n";
				cin >> offence;
				cout << "Defence (same conditions as offence) \n";
				cin >> defence;
				cout << "Force (not greater than 60 please) \n";
				cin >> force;
				cout << "Luck (values between 1 - 10) \n";
				cin >> luck;

				army.push_back(new Guerrero(name, HP, offence, defence, force, luck));
				cout << "Warrior was added. \n";

			} else if (choice == 2) //airbender
			{
				cout << "Name: ";
				cin >> name;
				cout << "HP: ";
				cin >> HP;
				cout << "Offence (valid in whole numbers or decimals (0.smth), no unexpected tokens please [%] \n";
				cin >> offence;
				cout << "Defence (same conditions as offence) \n";
				cin >> defence;
				cout << "Force (not greater than 60 please) \n";
				cin >> force;
				cout << "Luck (values between 1 - 10) \n";
				cin >> luck;
				cout << "Special Attack (same conditions as offence and defence) \n";
				cin >> specialAttack;

				army.push_back(new Airbender(name, HP, offence, defence, force, luck, specialAttack));
				cout << "Airbender was added. \n";
			} else if (choice == 3) //waterbender
			{
				cout << "Name: ";
				cin >> name;
				cout << "HP: ";
				cin >> HP;
				cout << "Offence (valid in whole numbers or decimals (0.smth), no unexpected tokens please [%] \n";
				cin >> offence;
				cout << "Defence (same conditions as offence) \n";
				cin >> defence;
				cout << "Force (not greater than 60 please) \n";
				cin >> force;
				cout << "Luck (values between 1 - 10) \n";
				cin >> luck;
				cout << "Special Attack (same conditions as offence and defence) \n";
				cin >> specialAttack;

				army.push_back(new Waterbender(name, HP, offence, defence, force, luck, specialAttack));
				cout << "Waterbender was added. \n";
			} else if (choice == 4) //earthbender
			{
				cout << "Name: ";
				cin >> name;
				cout << "HP: ";
				cin >> HP;
				cout << "Offence (valid in whole numbers or decimals (0.smth), no unexpected tokens please [%] \n";
				cin >> offence;
				cout << "Defence (same conditions as offence) \n";
				cin >> defence;
				cout << "Force (not greater than 60 please) \n";
				cin >> force;
				cout << "Luck (values between 1 - 10) \n";
				cin >> luck;
				cout << "Special Attack (same conditions as offence and defence) \n";
				cin >> specialAttack;

				army.push_back(new Earthbender(name, HP, offence, defence, force, luck, specialAttack));
				cout << "Earthbender was added. \n";
			} else if (choice == 5) //firebender
			{
				cout << "Name: ";
				cin >> name;
				cout << "HP: ";
				cin >> HP;
				cout << "Offence (valid in whole numbers or decimals (0.smth), no unexpected tokens please [%] \n";
				cin >> offence;
				cout << "Defence (same conditions as offence) \n";
				cin >> defence;
				cout << "Force (not greater than 60 please) \n";
				cin >> force;
				cout << "Luck (values between 1 - 10) \n";
				cin >> luck;
				cout << "Special Attack (same conditions as offence and defence) \n";
				cin >> specialAttack;

				army.push_back(new Firebender(name, HP, offence, defence, force, luck, specialAttack));
				cout << "Firebender was added. \n";
			} else {
				cout << "Nothing happened. \n";
			}

		} else if (option == 2)
		{
			int position;
			cout << "Which warrior? \n";
			cin >> position;

			if (position <= army.size())
			{
				int HP, luck;
				double offence, defence;
				cout << "You can change your warrior's HP stat, offence, defence, and luck. \n";
				cout << "HP: ";
				cin >> HP;
				cout << "Offence: ";
				cin >> offence;
				cout << "Defence: ";
				cin >> defence;

				army.at(position) -> setHP(HP);
				army.at(position) -> setOffence(offence);
				army.at(position) -> setDefence(defence);
				army.at(position) -> setLuck(luck);

				cout << "Changes were made. \n";
				} else {
				cout << "Doesn't exist. \n";
			}
		} else if (option == 3)
		{
			int position;
			cout << "Which warrior? \n";
			cin >> position;

			if (position <= army.size())
			{
				army.erase(army.begin() + position);
				cout << "Item was erased. \n";
			} else {
			cout << "Doesn't exist. \n";
			}
		} else if (option == 4) //le sigh por que elegi esto smdh
		{
			Guerrero* fighter1;
			Guerrero* fighter2;

			int pos1, pos2;
			cout << "Position of first warrior: \n";
			cin >> pos1;

			cout << "Position of second warrior: \n";
			cin >> pos2;

			if (pos1 <= army.size() && pos2 <= army.size())
			{
				fighter1 = army.at(pos1);
				cout << "Fighter one has been picked. \n";

				fighter2 = army.at(pos2);
				cout << "Fighter two has been picked. \n";
			}

			if (fighter1 != NULL && fighter2 != NULL)
			{
				fight(fighter1, fighter2);
			} else {
				cout << "Something's not quite right. \n";
			}
		} else if (option == 5)
		{
			cout << "k, bye. \n";
		} else if (option == 6)
		{
			for (int i = 0; i < army.size(); ++i)
			{
				cout << army.at(i) -> getName() << endl;
			}
		}
	} while (option != 5);
	return 0;
}

void fight(Guerrero* F1, Guerrero* F2) {
	int turns = 0;
	int choice;

	while(choice != 5 && F1 -> getHP() > 0 && F2 -> getHP() > 0) {
		try {
			cout << endl;
			if (turns % 2 == 0)
			{
				cout << F1 -> getName() << "'s turn! \n";
				cout << "HP: " << F1 -> getHP() << endl;
				cout << "1. Attack! \n";
				cout << "2. Elemental Attack! \n";
				cout << "3. Recover \n";
				cout << "4. Spy \n";
				cout << "5. Run Away \n";

				cin >> choice;

				if (choice == 1)
				{
					if (dynamic_cast<Airbender*>(F1) != NULL) {

						Airbender* temp = dynamic_cast<Airbender*>(F1);
						F2 = temp -> attack(F2);

					} else if (dynamic_cast<Waterbender*>(F1) != NULL) {
						
						Waterbender* temp = dynamic_cast<Waterbender*>(F1);
						F2 = temp -> attack(F2);

					} else if (dynamic_cast<Earthbender*>(F1) != NULL) {

						Earthbender* temp = dynamic_cast<Earthbender*>(F1);
						F2 = temp -> attack(F2);

					} else if (dynamic_cast<Firebender*>(F1) != NULL) {

						Firebender* temp = dynamic_cast<Firebender*>(F1);
						F2 = temp -> attack(F2);

					} else {
						F2 = F1 -> attack(F2);
					}
					turns++;
				} else if (choice == 2)
				{
					try {
						if (dynamic_cast<Airbender*>(F1) != NULL) {

						Airbender* temp = dynamic_cast<Airbender*>(F1);
						F2 = temp -> attackSpecial(F2);

						} else if (dynamic_cast<Waterbender*>(F1) != NULL) {
							
							Waterbender* temp = dynamic_cast<Waterbender*>(F1);
							F2 = temp -> attackSpecial(F2);

						} else if (dynamic_cast<Earthbender*>(F1) != NULL) {

							Earthbender* temp = dynamic_cast<Earthbender*>(F1);
							F2 = temp -> attackSpecial(F2);

						} else if (dynamic_cast<Firebender*>(F1) != NULL) {

							Firebender* temp = dynamic_cast<Firebender*>(F1);
							F2 = temp -> attackSpecial(F2);

						} else {
							cout << "Are you certain this warrior has a special attack? \n";
						}
					} catch (exception e) {
						cout << "Are you certain this warrior has a special attack? \n";
					}
					turns++;
				} else if (choice == 3)
				{
					if (dynamic_cast<Waterbender*>(F1) != NULL && F1 -> getForce() > 110) {
						Waterbender* temp = dynamic_cast<Waterbender*>(F1);
						F1 = temp -> recover(F1);
						turns++;
					} else {
						cout << "You don't have this ability! \n";
					}
				} else if (choice == 4)
				{
					cout << F2 -> toString() << endl;
					turns++;
				} else if (choice == 5)
				{
					cout << "You ran away! \n";
					cout << F2 -> getName() << "'s force has increased! \n";
					F2 -> setBattlesWon(F1);
				} else {
					cout << "That's not quite right. Let's give it another shot :) \n";
				}
			} else {
				cout << F2 -> getName() << "'s turn! \n";
				cout << "HP: " << F2 -> getHP() << endl;
				cout << "1. Attack! \n";
				cout << "2. Special Attack! \n";
				cout << "3. Recover \n";
				cout << "4. Spy \n";
				cout << "5. Run Away \n";

				cin >> choice;

				if (choice == 1)
				{
					if (dynamic_cast<Airbender*>(F2) != NULL) {

						Airbender* temp = dynamic_cast<Airbender*>(F2);
						F1 = temp -> attack(F1);

					} else if (dynamic_cast<Waterbender*>(F2) != NULL) {
						
						Waterbender* temp = dynamic_cast<Waterbender*>(F2);
						F1 = temp -> attack(F1);

					} else if (dynamic_cast<Earthbender*>(F2) != NULL) {

						Earthbender* temp = dynamic_cast<Earthbender*>(F2);
						F1 = temp -> attack(F1);

					} else if (dynamic_cast<Firebender*>(F2) != NULL) {

						Firebender* temp = dynamic_cast<Firebender*>(F2);
						F1 = temp -> attack(F1);

					} else {
						F1 = F2 -> attack(F1);
					}
					turns++;
				} else if (choice == 2)
				{
					try {
						if (dynamic_cast<Airbender*>(F2) != NULL) {

						Airbender* temp = dynamic_cast<Airbender*>(F2);
						F1 = temp -> attackSpecial(F1);

						} else if (dynamic_cast<Waterbender*>(F2) != NULL) {
							
							Waterbender* temp = dynamic_cast<Waterbender*>(F2);
							F1 = temp -> attackSpecial(F1);

						} else if (dynamic_cast<Earthbender*>(F2) != NULL) {

							Earthbender* temp = dynamic_cast<Earthbender*>(F2);
							F1 = temp -> attackSpecial(F1);

						} else if (dynamic_cast<Firebender*>(F2) != NULL) {

							Firebender* temp = dynamic_cast<Firebender*>(F2);
							F1 = temp -> attackSpecial(F1);

						} else {
							cout << "Are you certain this warrior has a special attack? \n";
						}
					} catch (exception e) {
						cout << "Are you certain this warrior has a special attack? \n";
					}
					turns++;
				} else if (choice == 3)
				{
					if (dynamic_cast<Waterbender*>(F2) != NULL && F2 -> getForce() > 110) {
						Waterbender* temp = dynamic_cast<Waterbender*>(F2);
						F2 = temp -> recover(F2);
						turns++;
					} else {
						cout << "You don't have this ability! \n";
					}
				} else if (choice == 4)
				{
					cout << F1 -> toString() << endl;
					turns++;
				} else if (choice == 5)
				{
					cout << "You ran away! \n";
					cout << F1 -> getName() << "'s force has increased! \n";
					F1 -> setBattlesWon(F2);
				} else {
					cout << "That's not quite right. Let's give it another shot :) \n";
				}
			}
			if (F1 -> getHP() <= 0)
			{
				cout << F1 -> getName() << " has fainted!";
				//break;
			} else if (F2 -> getHP() <= 0)
			{
				cout << F2 -> getName() << " has fainted!";
				//break;
			}
		} catch (exception e) {
			cout << "Something's not quite right. \n";
		}
	}
}