#include "../head/Heal.h"

std::string Heal::spellName(){
	return "Soin";
}
void Heal::printDescription(){
	std::cout << "Soigne le heros pour *" << healingAmount << "* pv, au prix de *" << mpCost <<"* points de mana" << std::endl;
}
void Heal::cast(Character& player, Character& enemy){

	if (((Wizzard&) player).MP >= mpCost){
		int actualHealingAmount = (player.maxHP - player.hp < healingAmount) ? player.maxHP - player.hp : healingAmount;
		std::cout << player.name << "lance un sort de " << spellName() <<", ce qui lui restaure " << actualHealingAmount << "hp";
		((Wizzard&) player).MP -= mpCost;
	}
}