#pragma once
#include "Personnage.h"
#include <string>

class Thief:public Personnage{
	public:
	Thief(std::string name, Game* game);
	std::string getClasseName() const;
};