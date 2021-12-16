#pragma once
class Personnage;
#include <string>
#include "Character.h"
#include "Game.h"
#include <vector>
#include <iostream>
class Personnage: public Character{
	public:
	static const int BaseDamage = 5;
	int weaponID = 0;
	Game* game = nullptr; // le personnage peut rapporter au jeu qu'il a perdu lors d'un combat
	//attention référence circulaire, à eviter dans le cas général
	//Game et Combat pourraient s'en occuper
	float damageMultiplier;
	std::vector<std::string> CombatActions;
	virtual std::string getClasseName() const = 0;
	virtual void chooseAction();
	Personnage(std::string name, int maxHP, float damageMultiplier, Game* game);
	friend std::ostream& operator<<(std::ostream& out, const Personnage& p);
	virtual void die();
	
};