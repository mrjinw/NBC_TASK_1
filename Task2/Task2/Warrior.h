#include <iostream>
#include <string>
#include "Player.h"
#pragma once

class Warrior : public Player

{
public:

	Warrior(std:: string nickname);
	void attack() override; // 값을 주는 건 cpp에서 여기는 override만 가져가셈
};

