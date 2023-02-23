#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// 랜덤 숫자 맞추기
int main()
{
	std::srand(time(NULL));

	int lotto[6] = {};
	int user[6] = {};
	int count = 0, user_num = 0, amount = 6;

	while (count < amount)
	{
		bool dupli = false;
		int num = std::rand() % 25 + 1;
		for (int i = 0; i < amount; i++)
		{
			if (lotto[i] == num)
			{
				dupli = true;
				break;
			}
		}
		if (!dupli)
		{
			lotto[count] = num;
			count++;
		}
	}

	count = 0;

	while (count < amount)
	{
		bool dupli = false;
		cout << count + 1 << "번째 번호를 입력하세요. : ";
		cin >> user_num;
		if (user_num > 25 || user_num < 1)
		{
			cout << "잘못된 숫자입니다. 다시 입력해주세요. \n";
		}
		else
		{
			for (int i = 0; i < amount; i++)
			{
				if (user[i] == user_num)
				{
					dupli = true;
					cout << "이미 입력된 숫자입니다.\n";
					break;
				}
			}
			if (!dupli)
			{
				user[count] = user_num;
				count++;
			}
		}
	}
	cout << "-----------------------------------\n";

	cout << endl << "로또 번호 : ";
	for (int i = 0; i < amount; i++)
	{
		cout << lotto[i] << " ";
	}

	cout << endl << "나의 번호 : ";
	for (int i = 0; i < amount; i++)
	{
		cout << user[i] << " ";
	}

	count = 0;

	for (int j = 0; j < amount; j++)
	{
		for (int i = 0; i < amount; i++)
		{
			if (lotto[j] == user[i])
			{
				count++;
			}
		}
	}

	cout << endl << "맞춘 개수에 따라 1 ~ 7등까지의 결과가 나옵니다. " << endl;
	cout << endl << "맞춘 개수: " << count << endl;
	cout << 7 - count << "등!! " << endl;

	return 0;
}
