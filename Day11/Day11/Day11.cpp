#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

void baskin(int count, int num)
{

}
// 배스킨라빈스 31 게임
int main()
{
	int num = 0, count = 1, k = 0;
	bool turn = false;

	while (count < 32)
	{
		if (turn == true)
		{
			std::srand(time(NULL));
			int com = std::rand() % 3 + 1;

			cout << "컴퓨터가 부른 숫자!! \n";
			num = com;
			turn = false;
		}
		else
		{
			cout << "개수를 입력하세요. : ";
			cin >> num;

			if (num > 3 || num < 1)
			{
				cout << "1 ~ 3의 숫자를 입력해주세요. \n";
				num = 0;
				turn = false;
			}
			else
			{
				cout << "사용자가 부른 숫자!! \n";
				turn = true;
			}
		}
		for (int i = 0; i < num; i++)
		{
			cout << count + i << endl;
		}
		count += num;
		k++;
	}

	if (turn == true)
	{
		cout << "게임 종료!! 컴퓨터의 승리입니다. \n";
	}
	else
		cout << "게임 종료!! 사용자의 승리입니다. \n";

	return 0;
}