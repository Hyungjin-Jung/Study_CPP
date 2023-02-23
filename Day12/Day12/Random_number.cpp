#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// ���� ���� ���߱�
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
		cout << count + 1 << "��° ��ȣ�� �Է��ϼ���. : ";
		cin >> user_num;
		if (user_num > 25 || user_num < 1)
		{
			cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���. \n";
		}
		else
		{
			for (int i = 0; i < amount; i++)
			{
				if (user[i] == user_num)
				{
					dupli = true;
					cout << "�̹� �Էµ� �����Դϴ�.\n";
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

	cout << endl << "�ζ� ��ȣ : ";
	for (int i = 0; i < amount; i++)
	{
		cout << lotto[i] << " ";
	}

	cout << endl << "���� ��ȣ : ";
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

	cout << endl << "���� ������ ���� 1 ~ 7������� ����� ���ɴϴ�. " << endl;
	cout << endl << "���� ����: " << count << endl;
	cout << 7 - count << "��!! " << endl;

	return 0;
}
