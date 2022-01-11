#include "Zombie.h"
#include <iostream>
#include <string.h>
Zombie* newZombie(std::string name) {
	Zombie *zomb;
	zomb->name = name;
	return zomb;
}