// --------- dynamic array (���� �迭), ������ (pointer) --------------
#include<iostream>
#include<string>

int main()
{
	/*
	int* p;
	int n = 5;
	p = &n;		// n�� �ּ� 

	std::cout << p << std::endl;
	std::cout << &n << std::endl;
	std::cout << n << std::endl;
	std::cout << *p << std::endl;

	n = 20;

	std::cout << p << std::endl;
	std::cout << *p << std::endl;
	
	*p = 15;

	std::cout << n << std::endl;
	std::cout << *p << std::endl;

	int num;
	std::cin >> num;
	// int num_array[num];	
	int* num_array = new int[num];	// �� �İ� ����.

	for (int i = 0; i < num; i++)
	{
		*(num_array + i) = 1;
		//num_array[i] = 1;
	}
	for (int i = 0; i < num; i++)
	{
		std::cout << num_array[i] << " ";
	}

	delete[] num_array;	// ���� �迭 ����(�ݳ�). ���� �޸𸮴� ��� �� �� �����ϱ�
	delete[] p;
	*/

	// ���� ������, 2���� �迭 
	// num�� �޾Ƽ� num x num �迭
	// for each���� ����� �� ����.
	int num;
	std::cin >> num;
	int** num_arr = new int* [num];

	for (int i = 0; i < num; i++)
	{
		num_arr[i] = new int[num];
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

	// vector


	return 0;
}