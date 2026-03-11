

#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(std::string nickname) : Player(nickname) 
{
    void setHP(int HP);
    {
        this->HP = 80;
    }
    //this->HP = 80; // 바꿀 hp만 변경
    //setHP(80);

}

void Warrior::attack() {
  
    cout << "검을 휘두릅니다." << endl;
}

