#pragma once
#include "Personnage.h"
#include <string>

class Warrior:public Personnage{
	public:
	Warrior(std::string name, Game* game);
	std::string getClasseName() const;
};