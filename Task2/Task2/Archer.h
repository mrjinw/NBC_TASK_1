#include <iostream>
#include <string>
#include "Player.h"
#pragma once


class Archer : public Player

{
public:
	Archer(std::string nickname);
	void attack() override;
};

