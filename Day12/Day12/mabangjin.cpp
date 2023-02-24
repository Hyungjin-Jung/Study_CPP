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
		if (num % 2 == 1) 
			break;
	}

	int** num_arr = new int* [num];		// ���� ũ�Ⱑ num�� ������ �迭
	int center = num / 2;	// ù��° �ε����� �ִ� ���� 1�� ù ���� ����� ��ġ�ϵ��� ��.
	int i = 0;	// ��
	int j = center;	// ��

	for (int k = 0; k < num; k++)
	{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
		num_arr[k] = new int[num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
	}

	for (int k = 1; k <= num * num; k++)	// num * num �� ��ŭ�� ���� ����
	{
		num_arr[i][j] = k;	// k�� ��µǴ� ����
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
/*
3�� �Է�

0.
i = 0
j = 1

1.
i = 0
j = 1
num_arr[0][1] = 1 => k

2.
i = 2
j = 2
num_arr[2][2] = 2 => k

3.
i = 1
j = 3 => j = 0
num_arr[1][0] = 3 => k

4. (k % num == 0) -> i++, �Ʒ� if�� ������ �ʱ� ������ j�� �״��
i = 2
j = 0
num_arr[2][0] = 4 => k

5.
i = 1
j = 1
num_arr[1][1] = 5 => k

6.
i = 0
j = 2
num_arr[0][2] = 6 => k

7. (k % num == 0) -> i++, �Ʒ� if�� ������ �ʱ� ������ j�� �״��
i = 1
j = 2
num_arr[1][2] = 7 => k

8.
i = 0
j = 3 => j = 0
num_arr[0][0] = 8 => k

9.
i = -1 => i = 2
j = 1
num_arr[2][1] = 9 => k

k <= num * num
���� ����

*/