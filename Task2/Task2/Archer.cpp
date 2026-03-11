#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer(std::string nickname) : Player(nickname)
{
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    /* 빈칸 4: 전사의 HP는 80으로 지정 */
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */

    void setAccuracy(int accuracy);
    {
        this->accuracy = 80;
    }


    //this->accuracy = 80;
    //setAccuracy(80);

}
void Archer::attack() {
    /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */
    cout << "활을 쏩니다." << endl;
}