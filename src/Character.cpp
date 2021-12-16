#include "../head/Character.h"

Character::Character(std::string name, int hp, int damage){
	this -> name = name;
	this -> hp = hp;
	this -> maxHP = hp;
	this -> damage = damage;
	
}
std::ostream& operator<<(std::ostream& out, const Character& c){
	return out << c.name <<": \nhp: " << c.hp << "/" << c.maxHP << "\ndégats: " << c.damage << std::endl;
}
void Character::Attack(Character& target){
	std::cout << name << " attaque " << target.name << " pour " << damage << " dégats" << std::endl;
	target.hp -= damage;
	if (target.hp <= 0){
		target.die();
	}
}
void Character::die(){
	std::cout << "character " << name << " has died." << std::endl;  
}