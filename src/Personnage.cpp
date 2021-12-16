#include "../head/Personnage.h"
Personnage::Personnage(std::string name,int maxHP, float damageMultiplier, Game* game) : Character(name, maxHP, BaseDamage * damageMultiplier){
	CombatActions.push_back("Attaquer");
	this -> damageMultiplier = damageMultiplier;
	this -> game = game;
}
std::ostream& operator<<(std::ostream& out, const Personnage& p){
	return out << p.getClasseName() << " " << (Character) p;
}

void Personnage::die(){
	std::cout << "le " << getClasseName() << " " << name << " (vous) est mort"<<std::endl;
	game -> GameOver();
}
void Personnage::chooseAction(){
	int i = 0;
	for (std::string action : CombatActions){
		std::cout << i + 1<< "." << action << std::endl;
	}
}