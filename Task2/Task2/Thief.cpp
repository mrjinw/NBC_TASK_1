#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(std::string nickname) : Player(nickname)
{
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    /* 빈칸 4: 전사의 HP는 80으로 지정 */
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */

    void setSpeed(int speed);
    {
        this->speed = 80;
    }


   // this->speed = 80;
    //setSpeed(80);


}
void Thief::attack() {
    /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */
    cout << "표창을 날립니다." << endl;
}