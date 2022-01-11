#include <iostream>
#include <string.h>
#include "Zombie.h"

void Announce() {
	std::cout << "Braainzz";
}
Zombie::Zombie() {
	Zombie::Announce();
}