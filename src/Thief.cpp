#include "../head/Thief.h"

std::string Thief::getClasseName() const{
	return "Rodeur";
}
Thief::Thief(std::string name, Game* game) : Personnage(name, 10, 3, game){

}