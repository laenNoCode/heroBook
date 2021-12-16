#include "../head/Wizzard.h"


std::string Wizzard::getClasseName() const{
	return "Mage";
}
Wizzard::Wizzard(std::string name, Game* game) : Personnage(name, 10, 3, game){
	maxMP = BASE_MP;
	MP = BASE_MP;
}
std::ostream& operator<<(std::ostream& out, const Wizzard& w){
	return out << (Personnage&) w  << "MP: " << w.MP << "/" << w.maxMP << std::endl;;
}

void Wizzard::addSpell(const Spell& spell){
	spells.push_back(spell);
}
void Wizzard::initSpell(){
	Spark s;
	Heal h;

}