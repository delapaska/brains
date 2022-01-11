// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include "Zombie.h"
Zombie* newZombie(std::string name);
int main()
{
	Zombie zomb;
	zomb.setName("Zombi");
	zomb.announce();
}
