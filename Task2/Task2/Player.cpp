#include "Player.h"


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}



Player::Player(string nickname)
{
    //this->nickname = nickname;
    //this->level = 10;
    //this->HP = 10;
    //this->MP = 10;
    //this->power = 10;
    //this->defence = 10;        // 그냥 이렇게 하면 됨ㅋㅋㅋ
    //this->accuracy = 10;
    //this->speed = 10;
    // 기본 값
    void setLevel(int level);
    {
        this->level = 10;
    }

    void HP(int HP);
    {
        this->HP = 10;
    }

    void setMP(int MP);
    {
        this->MP = 10;
    }

    void setAccuracy(int accuracy);
    {
        this->accuracy = 10;
    }

    void setSpeed(int speed);
    {
        this->speed = 10;
    }

    void setPower(int power);
    {
        this->power = 10;
    }

    void setDefence(int defence);
    {
        this->defence = 10;
    }
    
   // set 쓰려면 저렇게 하나하나 함수호출하고 값 변경해줘야하는데 이건 플레이어 cpp라서 그냥 get 쓰면 되는거같은데 get도 어차피 함수호출해서 쓰는거 똑같은듯
    //setLevel(10);
    //setHP(10);
    //setMP(10);
    //setAccuracy(10);
    //setSpeed(10);

    
}