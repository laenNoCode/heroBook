#include "../head/Spark.h"

std::string Spark::spellName(){
	return "Eclair";
}
void Spark::printDescription(){
	std::cout << "Electrocute un ennemi, ce qui lui inflige *" << damageAmount << "* pv, au prix de *" << mpCost <<"* points de mana" << std::endl;
}
void Spark::cast(Character& player, Character& enemy){

	if (((Wizzard&) player).MP >= mpCost){
		enemy.hp -= damageAmount;
		std::cout << player.name << "lance un sort d'" << spellName() <<" sur " << enemy.name << " ce qui lui inflige " << damageAmount << "hp";
		if (enemy.hp <= 0){
			enemy.die();
		}
		((Wizzard&) player).MP -= mpCost;
	}
}