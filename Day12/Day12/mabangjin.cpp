#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num = 0;
	//cin >> num;

	while (1)
	{
		cout << "�������� �� Ȥ�� ���� ���� �ڿ����� �Է����ּ��� : ";
		cin >> num;
		cout << endl;

		if (num > 0)
		{
			int** num_arr = new int* [num];		// ���� ũ�Ⱑ num�� ������ �迭
			int center = num / 2;
			int value = 1;

			int i = 0;
			int j = center;

			for (int k = 0; k < num; k++)
			{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
				num_arr[k] = new int[num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
			}

			for (int k = 0; k < num * num; k++)
			{
				num_arr[i][j] = value;
				if (value % num == 0)
				{
					i++;
				}
				else
				{
					i--;
					j++;
				}
				if (i < 0)
				{
					i = num - 1;
				}
				if (j >= num)
				{
					j = 0;
				}
				value++;
			}

			for (int i = 0; i < num; i++)
			{
				for (int j = 0; j < num; j++)
				{
					cout << num_arr[i][j] << " ";
				}
				cout << endl;
			}

			for (int k = 0; k < num; k++)
			{
				delete[] num_arr[k];	// ���� �迭 ����
			}
			delete[] num_arr;	// �ٱ� �迭 ����

			break;
		}
	}

	return 0;
}
/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num = 0;
	//cin >> num;
	int** num_arr = new int* [num * num];		// ���� ũ�Ⱑ num�� ������ �迭
	int center = (num + 1) / 2;
	int value = 1;

	int i = 1;
	int j = center;

	while (1)
	{
		if (num < 1)
		{
			cout << "�������� �� Ȥ�� ���� ���� �ڿ����� �Է����ּ��� : ";
			cin >> num;
		}
		else
		{

			break;
		}
	}
	for (int k = 0; k < num * num; k++)
	{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
		num_arr[k] = new int[num * num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
	}

	for (int k = 0; k < num * num; k++)
	{
		num_arr[i][j] = value;
		if (value % num == 0)
		{
			i++;
		}
		else
		{
			i--;
			j++;
		}
		if (i < 1)
		{
			i = num;
		}
		if (j > num)
		{
			j = 1;
		}
		value++;
	}

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << num_arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int k = 0; k < num * num; k++)
	{
		delete[] num_arr[k];	// ���� �迭 ����
	}
	delete[] num_arr;	// �ٱ� �迭 ����

	return 0;
}
*/
/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num = 0;

	while (1)
	{
		cout << "�������� �� Ȥ�� ���� ���� �ڿ����� �Է����ּ��� : ";
		cin >> num;
		cout << endl;

		if (num > 0)
		{
			int** num_arr = new int* [num];		// ���� ũ�Ⱑ num�� ������ �迭
			int center = num / 2;
			int value = 1;
			int i = 0;
			int j = center;

			for (int k = 0; k < num; k++)
			{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
				num_arr[k] = new int[num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
			}

			for (int k = 1; k <= num * num; k++)
			{
				cout << i << " " << j << endl;
				num_arr[i][j] = value;
				if (value % num == 0)
				{
					i++;
				}
				else

				{
					i--;
					j++;
				}

				if (i < 0)
				{
					i = num - 1;
				}
				if (j > num)
				{
					j = 0;
				}
				value++;
			}

			cout << "dd" << endl;

			for (int i = 0; i < num; i++)
			{
				cout << i << endl;
				for (int j = 0; j < num; j++)
				{
					cout << num_arr[i][j] << " ";
				}
				cout << endl;
			}

			for (int k = 0; k < num; k++)
			{
				delete[] num_arr[k];	// ���� �迭 ����
			}
			delete[] num_arr;	// �ٱ� �迭 ����

			break;
		}
	}

	return 0;
}
*/