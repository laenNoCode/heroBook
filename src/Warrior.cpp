#include "../head/Warrior.h"

std::string Warrior::getClasseName() const{
	return "Guerrier";
}
Warrior::Warrior(std::string name, Game* game) : Personnage(name, 20,1.5, game){

}