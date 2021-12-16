#include "../head/Game.h"
#include "../head/Warrior.h"
#include "../head/Wizzard.h"
#include "../head/Thief.h"
void Game::GameOver()
{
	std::cout << "vous avez perdu : *Game Over* ! \nEssayez encore" << std::endl;
}
void Game::init(){
	std::string name = "";
	while (name.length() == 0)
	{
		std::cout << "choisissez votre nom:" << std::endl;
		std::cin >> name;
	}
	std::string choice;
	std::cout << "choisissez votre classe de personnage\n1.Guerrier\n2.Rodeur\n3.Mage" << std::endl;
	std::cin >> choice;
	while (choice.length() != 1 || choice[0] <'1' || choice[0] >'3')
	{
		std::cout << "veuillez effectuer un choix valide ! :(" << std::endl;
		std::cin >> choice;
	}
	if (choice[0] == '1')
		you = new Warrior(name, this);
	if (choice[0] == '2')
		you = new Thief(name, this);
	if (choice[0] == '3'){
		you = new Wizzard(name, this);
	}
	std::cout << *you;
}
Game::Game(){
	you = nullptr;
}

Game::~Game(){
	if (you != nullptr){
		delete you;
	}
	
}