#pragma once
class Game;
#include <iostream>
#include "Personnage.h"


class Game{
	public:
	Game();
	Personnage* you;
	void GameOver();
	void init();
	virtual ~Game();
};
