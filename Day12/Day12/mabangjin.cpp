#include<iostream>
#include<string>

using namespace std;
// ������
int main()
{
	int num = 0;

	while (1) 
	{
		cout << "�������� �� Ȥ�� ���� ���� �ڿ����� �Է����ּ��� : ";
		cin >> num;
		cout << endl;
		if (num > 0) 
			break;
	}

	int** num_arr = new int* [num];		// ���� ũ�Ⱑ num�� ������ �迭
	int center = num / 2;
	int i = 0;
	int j = center;

	for (int k = 0; k < num; k++)
	{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
		num_arr[k] = new int[num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
	}

	for (int k = 1; k <= num * num; k++)
	{
		num_arr[i][j] = k;	
		if (k % num == 0)	// k�� num�� �������� ���� �Ʒ���
		{
			i++;
		}
		else	// �ƴ϶�� ���� �� ĭ ����, ���� ������
		{
			i--;
			j++;
		}
		if (i < 0)	// ���� �� ���� ����, ���� ���� �Ʒ��ٷ� �̵�
		{
			i = num - 1;
		}
		if (j >= num)	// ���� ������ �̵��ϸ� �ٽ� ù��° ������ �̵�
		{
			j = 0;
		}
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{// ���
			cout << num_arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int k = 0; k < num; k++)
	{
		delete[] num_arr[k];	// ���� �迭 ����
	}
	delete[] num_arr;	// �ٱ� �迭 ����

	return 0;
}
