#include "Guerrero.h"
#include "Firebender.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Guerrero* Firebender::attack(Guerrero* warrior) {
	int iSecret;

	if (luck < 5)
	{
		iSecret = rand() % 10000 + 1;
	} else if (luck > 5 && luck < 10)
	{
		iSecret = rand() % 1000 + 1;
	} else {
		iSecret = rand() % 100 + 1;
	}
	
	int hit = (warrior -> getHP() * offence) - warrior -> getDefence();
	
	if (iSecret == 50)
	{
		hit = hit * 2;
	}

	warrior -> setHP(warrior -> getHP() - hit);
	return warrior;
}