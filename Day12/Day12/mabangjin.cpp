/*
#include<iostream>
#include<string>

int main()
{
	int num;
	std::cin >> num;
	int** num_arr = new int* [num];		// ���� ũ�Ⱑ num�� ������ �迭

	for (int i = 0; i < num; i++)
	{// ������ index�� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� �Ѵ�.
		num_arr[i] = new int[num];		// ������ �࿡ ũ�Ⱑ num�� �迭�� �Ҵ�
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			num_arr[i][j] = 1;
			std::cout << num_arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < num; i++)
	{
		delete[] num_arr[i];	// ���� �迭 ����
	}
	delete[] num_arr;	// �ٱ� �迭 ����

	return 0;
}
*/