#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// 숫자 야구 게임
int main()
{
	std::srand(time(NULL));

	int com[3] = {};
	int user[3] = {};
	int count = 0, user_num = 0, amount = 3;
	int value_count = 0, place_count = 0, num_count = 0;

	while (count < amount)
	{
		bool dupli = false;
		int num = std::rand() % 9 + 1;
		for (int i = 0; i < amount; i++)
		{
			if (com[i] == num)
			{
				dupli = true;
				break;
			}
		}
		if (!dupli)
		{
			com[count] = num;
			count++;
		}
	}

	count = 0;

	do
	{
		cout << "1 ~ 9 사이의 숫자 3개를 입력 하시오. (이외의 숫자: 종료)" << endl;
		num_count++;
		while (count < amount)
		{
			cin >> user_num;
			user[count] = user_num;
			count++;
		}

		cout << "컴퓨터의 번호 : ";

		for (int i = 0; i < amount; i++)
		{
			cout << com[i] << " ";
		}

		count = 0;
		place_count = 0;
		value_count = 0;

		for (int j = 0; j < amount; j++)
		{
			if (com[j] == user[j])
			{
				place_count++;
			}
			for (int i = 0; i < amount; i++)
			{
				if (com[j] != user[j] && com[i] == user[j])
				{
					value_count++;
				}
			}
		}

		cout << endl << "Strike : " << place_count << "\t Ball : " << value_count << endl << endl;

		if (place_count == 3)
		{
			cout << num_count << "번 만에 맞췄습니다." << endl;
			break;
		}
	} while (user_num < 10 && user_num > 0);

	return 0;
}

/*
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// 숫자 야구 게임
int main()
{
	std::srand(time(NULL));

	int com[3] = {};
	int user[3] = {};
	int count = 0, user_num = 0, amount = 3;

	while (count < amount)
	{
		bool dupli = false;
		int num = std::rand() % 9 + 1;
		for (int i = 0; i < amount; i++)
		{
			if (com[i] == num)
			{
				dupli = true;
				break;
			}
		}
		if (!dupli)
		{
			com[count] = num;
			count++;
		}
	}

	count = 0;

	while (count < amount)
	{
		bool dupli = false;
		cout << count + 1 << "번째 번호를 입력하세요. : ";
		cin >> user_num;
		if (user_num > 9 || user_num < 1)
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

	cout << endl << "컴퓨터의 번호 : ";
	for (int i = 0; i < amount; i++)
	{
		cout << com[i] << " ";
	}

	cout << endl << "나의 번호 : ";
	for (int i = 0; i < amount; i++)
	{
		cout << user[i] << " ";
	}

	count = 0;

	for (int j = 0; j < amount; j++)
	{
		com[j];
		for (int i = 0; i < amount; i++)
		{
			if (com[j] == user[i])
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
*/