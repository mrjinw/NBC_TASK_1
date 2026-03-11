// player.h

#pragma once
#include <string>
#include <iostream>
using namespace std;

class Player {
public:
    Player(string nickname);

    virtual void attack() = 0; // = 0; 으로 선언했으니까 다른 자식 클래스에서 값을 줘야함
    void printPlayerStatus();

    // getter 함수
    string getJobName(); //리턴값 반환
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();
    

    // setter 함수
    void setNickname(string nickname);
    void setHP(int HP);
    void setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);
    void setLevel(int level);

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};

