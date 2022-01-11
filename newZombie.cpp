#include "Zombie.h"
#include <iostream>
#include <cstdlib>

Zombie* newZombie(std::string name) {
	Zombie* zomb = new Zombie;
	zomb->setName(name);
	return zomb;

 }
