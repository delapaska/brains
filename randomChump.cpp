#include "Zombie.h"
#include <iostream>
#include <cstdlib>
Zombie* newZombie(std::string name);
void randomChump(std::string name) {
	Zombie* zomb = newZombie(name);
	zomb->announce();
	delete zomb;
	return;

}