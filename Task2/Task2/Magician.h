#include <iostream>
#include <string>
#include "Player.h"
#pragma once

class Magician : public Player

{
public:
	Magician(std::string nickname);
	void attack() override;
};

