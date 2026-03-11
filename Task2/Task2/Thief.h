#include <iostream>
#include <string>
#include "Player.h"
#pragma once

class Thief : public Player

{
public:
	Thief(std::string nickname);
	void attack() override;
};

