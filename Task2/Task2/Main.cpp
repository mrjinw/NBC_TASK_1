
#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0; // 이게 직업 선택 받을 변수
    string nickname; // 이건 이름 받아올 변수     

    Player* player = nullptr; // player 객체를 가리킬 포인터 변수 // 아직 연결 안 됨 // 널포인터 지정 안 하면 쓰레기 값이 들어가있음

 
    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    while (1)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << (i + 1) << ". " << jobs[i] << endl; // 직업  1 2 3 4 고르는거
        }


        cout << "선택: ";
        cin >> job_choice;



        switch (job_choice)
        {     // new가 동적할당이라했음 힙 메모리에 저장
        case 1:
            player = new Warrior(nickname); // 새로운 객체 생성 //이제야 연결됨
            break;
        case 2:
            player = new Magician(nickname);
            break;
        case 3:
            player = new Thief(nickname);
            break;
        case 4:
            player = new Archer(nickname);
            break;
        default:
            cout << "잘못된 입력입니다. 다시 선택해주세요. " << endl;
            continue;
            //return 1;

        }

        break;
    }

    player->attack();
    player->printPlayerStatus();

    if (player != nullptr)
        delete player; // 

    return 0;
}

