#include<iostream>
#include<ctime>
#include<vector>

using namespace std;

// �轺Ų��� 31 ����
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
		cout << "������ �Է��ϼ���. : ";
		cin >> num;
		if (num < 4 && num > 0 && is_dup == false)
		{
			cout << "����ڰ� �θ� ����!! \n";
			for (int j = 0; j < num; j++)
			{
				cout << BR31[count + j] << endl;
				if (BR31[count + j] == 31)
				{
					cout << "���� ����!! ��ǻ���� �¸��Դϴ�. \n";
					break;
				}
			}
			count = num + count;

			is_dup = true;
		}
		else
		{
			cout << "1 ~ 3�� ���ڸ� �Է����ּ���. \n";
		}
		if (is_dup == true)
		{
			cout << "��ǻ�Ͱ� �θ� ����!! \n";
			for (int j = 0; j < com; j++)
			{
				cout << BR31[count + j] << endl;
				if (BR31[count + j] == 31)
				{
					cout << "���� ����!! ������� �¸��Դϴ�. \n";
					break;
				}
			}
			count = com + count;

			is_dup = false;
		}

	}

	return 0;
}