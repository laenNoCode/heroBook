#pragma once
#include <string>
#include <iostream>
class Character
{
private:
	/* data */
public:
	void Attack(Character& target);
	virtual void die();
	int hp;
	int maxHP;
	int damage;
	std::string name;
	friend std::ostream& operator<<(std::ostream& out, const Character&);
	Character(std::string name, int hp, int damage);
};
