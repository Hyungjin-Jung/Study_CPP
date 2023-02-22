/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num, k = 0;
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
			k++;
			num_arr[i][j] = k;
			//std::cout << num_arr[i][j] << " ";
			std::cout << num_arr[i][j] << " ";
		}
		//std::cout << std::endl;
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

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int** num_arr = new int* [num];		// 행의 크기가 num인 이차원 배열
	int center = (num + 1) / 2;
	int value = 1;

	int i = 1;
	int j = center;

	for (int k = 0; k < num * num; k++)
	{// 각각의 index에 선언하고자 하는 배열의 크기만큼을 가리키게 한다.
		num_arr[k] = new int[num * num];		// 각각의 행에 크기가 num인 배열을 할당
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
		delete[] num_arr[k];	// 안쪽 배열 해제
	}
	delete[] num_arr;	// 바깥 배열 해제

	return 0;
}