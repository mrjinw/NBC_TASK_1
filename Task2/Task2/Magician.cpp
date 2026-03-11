#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician(std::string nickname) : Player(nickname)
{
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    /* 빈칸 4: 전사의 HP는 80으로 지정 */
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */

    void setMP(int MP);
    {
        this->MP = 80;
    }


    //this->MP = 80;

    //setMP(80);

}
void Magician::attack() {
    /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */
    cout << "파이어볼을 쏩니다." << endl;
}