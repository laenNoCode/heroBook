#pragma once
#include "Spell.h"
#include "Wizzard.h"
#include <iostream>

class Spark : public Spell{
	public:
	int damageAmount = 20;
	Spark();
	std::string spellName();
	void printDescription();
	void cast (Character& player, Character& enemy);
};