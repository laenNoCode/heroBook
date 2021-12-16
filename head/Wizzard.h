#pragma once
#include "Personnage.h"
#include "Spell.h"
#include "Spark.h"
#include "Heal.h"
#include <string>
#include <vector>
#include <memory>
class Wizzard:public Personnage{
	public:
	static const int BASE_MP = 20;
	int maxMP, MP;
	std::unique_ptr<Spell> spell;
	//unique Spell spell;
	
	void initSpell();
	Wizzard(std::string name, Game* game);
	friend std::ostream& operator<<(std::ostream& out, const Wizzard& w);
	std::string getClasseName() const;

};