#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

void baskin(int count, int num)
{

}
// �轺Ų��� 31 ����
int main()
{
	int num = 0, count = 1;
	bool turn = false;

	while (1)
	{
		std::srand(time(NULL));
		int com = std::rand() % 3 + 1;

		cout << "������ �Է��ϼ���. : ";
		cin >> num;
		cout << "����ڰ� �θ� ����!! \n";
		for (int i = 0; i < num + com; i++)
		{
			if (count + i == num)
			{
				cout << "��ǻ�Ͱ� �θ� ����!! \n";
			}
			cout << count + i << endl;
		}
		count += num + com;
	}

	return 0;
}