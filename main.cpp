#include <iostream>
#include "Guerrero.h"
#include "Firebender.h"
#include "Waterbender.h"
#include "Earthbender.h"
#include "Airbender.h"
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<Guerrero*> army;
	army.push_back(new Firebender("Zuko", 120, 15, 30, 60, 9, 40));
	army.push_back(new Airbender("Tenzin", 200, 20, 10, 50, 10, 25));
	army.push_back(new Waterbender("Katara", 110, 20, 15, 45, 7, 0.3));
	army.push_back(new Earthbender("Toph", 150, 60, 60, 60, 1, 75));
	army.push_back(new Guerrero("Sokka", 200, 50, 50, 50, 1)); //lol

	int option;

	do
	{
		cout << "1. Registrar guerrero. \n";
		cout << "2. Atender guerrero (modificar y recuperar HP). \n";
		cout << "3. Despedir guerrero (eliminar). \n";
		cout << "4. FIGHT! \n";
		cout << "5. Quit. \n";

		cin >> option;

		if (option == 1)
		{

		} else if (option == 2)
		{

		} else if (option == 3)
		{

		} else if (option == 4) //le sigh por que elegi esto smdh
		{

		} else if (option == 5)
		{
			cout << "k, bye. \n";
		}
	} while (option != 5);
	return 0;
}