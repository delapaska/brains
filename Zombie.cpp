#include "Zombie.h"
#include <iostream>
#include <cstdlib>
const std::string& Zombie::getName() const {
	return Name;
}
void Zombie::setName(const std::string &name) {
	Name = name;
}
void Zombie::announce() {
	std::cout << "hi, my name is: " << this->Name << std::endl;
}