/*
#include<iostream>
#include<string>

int main()
{
	int num;
	std::cin >> num;
	int** num_arr = new int* [num];		// 행의 크기가 num인 이차원 배열

	for (int i = 0; i < num; i++)
	{// 각각의 index에 선언하고자 하는 배열의 크기만큼을 가리키게 한다.
		num_arr[i] = new int[num];		// 각각의 행에 크기가 num인 배열을 할당
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

	return 0;
}
*/