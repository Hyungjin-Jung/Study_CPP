#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

// �轺Ų��� 31 ����
int main()
{
	int num = 0, count = 1;
	bool turn = false;

	while (1)
	{
		cout << "������ �Է��ϼ���. : ";
		cin >> num;

		if (num < 4 && num > 0)
		{
			cout << "����ڰ� �θ� ����!! \n";
			for (int i = 0; i < num; i++)
			{
				cout << count + i << endl;
			}

			count += num;
			turn = true;

			if (count > 31)
			{
				cout << "���� ����!! ��ǻ���� �¸��Դϴ�. \n";
				break;
			}
		}
		else
		{
			cout << "1 ~ 3�� ���ڸ� �Է����ּ���. \n";
		}

		std::srand(time(NULL));
		int com = std::rand() % 3 + 1;

		if (turn == true)
		{
			cout << "��ǻ�Ͱ� �θ� ����!! \n";
			for (int i = 0; i < com; i++)
			{
				cout << count + i << endl;
			}
			count += com;
			turn = false;
			if (count > 31)
			{
				cout << "���� ����!! ������� �¸��Դϴ�. \n";
				break;
			}
		}
	}

	return 0;
}