#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// ���� �߱� ����
int main()
{
	std::srand(time(NULL));

	const int amount = 3;
	int com[amount] = {};
	int user[amount] = {};
	int count = 0, user_num = 0; 
	int value_count = 0, place_count = 0, num_count = 0;
	bool dupli = false;

	while (count < amount)
	{
		dupli = false;
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

	cout << "��ǻ���� ��ȣ : ";

	for (int i = 0; i < amount; i++)
	{
		cout << com[i] << " ";
	}
	cout << endl << endl;

	count = 0;

	do
	{
		cout << "1 ~ 9 ������ ���� 3���� �Է� �Ͻÿ�. (�̿��� ����: ����)" << endl << "�Է��� ��: ";
		num_count++;
		while (count < amount)
		{
			cin >> user_num;
			user[count] = user_num;
			count++;
			if (user_num > 9 || user_num < 1)
			{
				dupli = true;
			}
		}

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

		cout << "Strike : " << place_count << "\t Ball : " << value_count << endl << endl;

		if (place_count == 3)
		{
			cout << num_count << "�� ���� ������ϴ�." << endl;
			break;
		}
		else
		{
			count = 0;
			place_count = 0;
			value_count = 0;
		}
	} while (dupli == false);

	return 0;
}

/*
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// ���� �߱� ����
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
		cout << count + 1 << "��° ��ȣ�� �Է��ϼ���. : ";
		cin >> user_num;
		if (user_num > 9 || user_num < 1)
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

	cout << endl << "��ǻ���� ��ȣ : ";
	for (int i = 0; i < amount; i++)
	{
		cout << com[i] << " ";
	}

	cout << endl << "���� ��ȣ : ";
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

	cout << endl << "���� ������ ���� 1 ~ 7������� ����� ���ɴϴ�. " << endl;
	cout << endl << "���� ����: " << count << endl;
	cout << 7 - count << "��!! " << endl;

	return 0;
}
*/