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
	int count = 0, user_num = 0;

	while (count < 6)
	{
		bool dupli = false;
		int num = std::rand() % 25 + 1;
		for (int i = 0; i < 6; i++)
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
	cout << "�ζ� ��ȣ�� : ";
	for (int i = 0; i < 6; i++)
	{
		cout << lotto[i] << " ";
	}
	cout << endl;

	count = 0;
	while (count < 6)
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
			for (int i = 0; i < 6; i++)
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

	cout << "���� ��ȣ : ";

	for (int i = 0; i < 6; i++)
	{
		cout << user[i] << " ";
	}

	count = 0;

	for (int j = 0; j < 6; j++)
	{
		lotto[j];
		for (int i = 0; i < 6; i++)
		{
			if (lotto[j] == user[i])
			{
				count++;
			}
		}
	}
	cout << endl << "���� ����: " << count << endl;

	cout << 7 - count << "��!! " << endl;

	return 0;
}