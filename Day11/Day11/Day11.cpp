#include<iostream>
#include<ctime>
#include<vector>

using namespace std;

// 배스킨라빈스 31 게임
int main()
{
	std::srand(time(NULL));
	int BR31[31] = {};
	int num = 0, count = 0;
	int com = std::rand() % 3 + 1;
	bool is_dup = false;

	for (int i = 0; i < 31; i++)
	{
		BR31[i] = i + 1;
	}
	while (count < 32)
	{
		cout << "개수를 입력하세요. : ";
		cin >> num;
		if (num < 4 && num > 0 && is_dup == false)
		{
			cout << "사용자가 부른 숫자!! \n";
			for (int j = 0; j < num; j++)
			{
				cout << BR31[count + j] << endl;
				if (BR31[count + j] == 31)
				{
					cout << "게임 종료!! 컴퓨터의 승리입니다. \n";
					break;
				}
			}
			count = num + count;

			is_dup = true;
		}
		else
		{
			cout << "1 ~ 3의 숫자를 입력해주세요. \n";
		}
		if (is_dup == true)
		{
			cout << "컴퓨터가 부른 숫자!! \n";
			for (int j = 0; j < com; j++)
			{
				cout << BR31[count + j] << endl;
				if (BR31[count + j] == 31)
				{
					cout << "게임 종료!! 사용자의 승리입니다. \n";
					break;
				}
			}
			count = com + count;

			is_dup = false;
		}

	}

	return 0;
}