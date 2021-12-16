#pragma once
class Wizzard;
#include "Character.h"

class Spell{
	public:
	int mpCost;
	virtual std::string spellName() = 0;
	virtual void printDescription() = 0;
	virtual void cast(Character& Player, Character& enemy) = 0;
};