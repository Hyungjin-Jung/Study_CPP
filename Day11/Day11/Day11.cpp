#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

// 배스킨라빈스 31 게임
int main()
{
	int num = 0, count = 1;
	bool turn = false;

	while (1)
	{
		cout << "개수를 입력하세요. : ";
		cin >> num;

		if (num < 4 && num > 0)
		{
			cout << "사용자가 부른 숫자!! \n";
			for (int i = 0; i < num; i++)
			{
				cout << count + i << endl;
			}

			count += num;
			turn = true;

			if (count > 31)
			{
				cout << "게임 종료!! 컴퓨터의 승리입니다. \n";
				break;
			}
		}
		else
		{
			cout << "1 ~ 3의 숫자를 입력해주세요. \n";
		}

		std::srand(time(NULL));
		int com = std::rand() % 3 + 1;

		if (turn == true)
		{
			cout << "컴퓨터가 부른 숫자!! \n";
			for (int i = 0; i < com; i++)
			{
				cout << count + i << endl;
			}
			count += com;
			turn = false;
			if (count > 31)
			{
				cout << "게임 종료!! 사용자의 승리입니다. \n";
				break;
			}
		}
	}

	return 0;
}