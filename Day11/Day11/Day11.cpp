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

	while (count < 32)
	{
		if (turn == true)
		{
			std::srand(time(NULL));
			int com = std::rand() % 3 + 1;

			cout << "��ǻ�Ͱ� �θ� ����!! \n";
			num = com;
			turn = false;
		}
		else
		{
			cout << "������ �Է��ϼ���. : ";
			cin >> num;

			if (num > 3 || num < 1)
			{
				cout << "1 ~ 3�� ���ڸ� �Է����ּ���. \n";
				num = 0;
			}
			else
			{
				cout << "����ڰ� �θ� ����!! \n";
				turn = true;
			}
		}
		for (int i = 0; i < num; i++)
		{
			cout << count + i << endl;
		}
		count += num;
	}

	turn == true ? cout << "���� ����!! ��ǻ���� �¸��Դϴ�. \n" : cout << "���� ����!! ������� �¸��Դϴ�. \n";

	return 0;
}