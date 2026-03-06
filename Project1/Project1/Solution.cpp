#include <iostream>
using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion) 
{
	*p_HPPotion = 5;
	*p_MPPotion = 5;

	return;
}

int main()
{
	int status[4] = { 0, };

	cout << "HP와 MP를 설정하세요" << endl;
	cin >> status[0] >> status[1];

	int i = 0;

	while (i < 1)
	{
		if (status[0] > 50 && status[1] > 50)
		{
			cout << "HP가 " << status[0] << ", MP가 " << status[1] << "으로 설정되었습니다." << endl;
			++i;
		}

		else
		{
			cout << "HP와 MP는 50 이하 일 수 없습니다" << endl << "다시 입력하세요" << endl;
			cin >> status[0] >> status[1];
		}
	}

	cout << "공격력과 방어력을 설정하세요" << endl;
	cin >> status[2] >> status[3];

	i = 0;

	while (i < 1)
	{
		if (status[2] > 0 && status[3] > 0)
		{
			cout << "공격력이 " << status[2] << ", 방어력이 " << status[3] << "으로 설정되었습니다." << endl;
			++i;
		}

		else
		{
			cout << "공격력과 방어력은 0 이하 일 수 없습니다" << endl << "다시 입력하세요" << endl;
			cin >> status[2] >> status[3];
		}
	}


	i = 0;
;
	while(1)
	{
		cout << "1.HP UP / 2.MP UP / 3.공격력 UP / 4.방어력 UP / 5.현재 능력치 / 6.Level Up / 0.나가기" << endl;
		cin >> i;

		if (i == 1)
		{
			cout << "HP가 증가되었습니다" << endl;
		}
		if (i == 2)
		{
			cout << "MP가 증가되었습니다" << endl;
		}
		if (i == 3)
		{
			cout << "공격력이 증가되었습니다" << endl;
		}
		if (i == 4)
		{
			cout << "방어력이 증가되었습니다" << endl;
		}
		if (i == 5)
		{
			cout << "현재 능력치" << endl;
		}
		if (i == 6)
		{
			cout << "Level이 증가되었습니다" << endl;
		}
		if (i == 0)
		{
			break;
		}
	}

	int choice = 0;
	int HPPotion = 5;
	int MPPotion = 5;

	setPotion(5, &HPPotion, &MPPotion);

	cout << "포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl;
	cout << "==============================================" << endl;
	cout << "<스탯 관리 시스템>" << endl;

	while (1)
	{
		cout << "번호를 선택해주세요: ";
		cin >> choice;

		if (choice == 0)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		
			switch (choice)
			{
			case 1:
				if (HPPotion <= 0)
				{
					cout << "포션이 부족합니다." << endl;
					continue;
				}
				status[0] += 20;
				HPPotion--;
				cout << "*HP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
				cout << "현재 남은 HP: " << status[0] << endl;
				cout << "남은 포션 수: " << HPPotion << endl;
				break;

			case 2:
				if (MPPotion <= 0)
				{
					cout << "포션이 부족합니다." << endl;
					continue;
				}
				status[1] += 20;
				MPPotion--;
				cout << "*MP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
				cout << "현재 남은 MP: " << status[1] << endl;
				cout << "남은 포션 수: " << MPPotion << endl;
				break;


				
			case 3: 
				if (status[2] >= 0)
				{
					status[2] *= 2;
				    cout << "공격력이 두 배로 올랐습니다." << endl;
					cout << "현재 공격력: " << status[2] << endl;
					break;
				}

			case 4:
				if (status[3] >= 0)
				{
					status[3] *= 2;
					cout << "방어력이 두 배로 올랐습니다." << endl;
					cout << "현재 방어력: " << status[3] << endl;
					break;
				}
			case 5:
				if (true)
				{
					cout << "HP: " << status[0] << ", MP: " << status[1] << ", 공격력: " << status[2] << ", 방어력: " << status[3] << endl;
					break;
				}
			case 6:
				if (true)
				{
					HPPotion++;
					MPPotion++;
					cout << "Level Up !!" << endl;
				}
			defualt:
				cout << "다시 입력해세요." << endl;
				break;
			}
			

	}

	return 0;
}
	