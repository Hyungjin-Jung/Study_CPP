// --------- dynamic array (동적 배열), 포인터 (pointer) --------------
#include<iostream>
#include<string>

int main()
{
	/*
	int* p;
	int n = 5;
	p = &n;		// n의 주소 

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
	int* num_array = new int[num];	// 위 식과 같다.

	for (int i = 0; i < num; i++)
	{
		*(num_array + i) = 1;
		//num_array[i] = 1;
	}
	for (int i = 0; i < num; i++)
	{
		std::cout << num_array[i] << " ";
	}

	delete[] num_array;	// 동적 배열 해제(반납). 동적 메모리는 사용 후 꼭 해제하기
	delete[] p;
	*/

	// 이중 포인터, 2차원 배열 
	// num을 받아서 num x num 배열
	// for each문은 사용할 수 없다.
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
		delete[] num_arr[i];	// 안쪽 배열 해제
	}
	delete[] num_arr;	// 바깥 배열 해제

	// vector


	return 0;
}