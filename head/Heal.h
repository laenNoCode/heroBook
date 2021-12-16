#pragma once
#include "Spell.h"
#include "Wizzard.h"
#include <iostream>

class Heal : public Spell{
	public:
	int healingAmount = 5;
	Heal();
	std::string spellName();
	void printDescription();
	void cast (Character& player, Character& enemy);
};