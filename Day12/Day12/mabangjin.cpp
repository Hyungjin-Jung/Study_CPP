#include<iostream>
#include<string>

using namespace std;
// 마방진
int main()
{
	int num = 0;

	while (1) 
	{
		cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요 : ";
		cin >> num;
		cout << endl;
		if (num % 2 == 1) 
			break;
	}

	int** num_arr = new int* [num];		// 행의 크기가 num인 이차원 배열
	int center = num / 2;	// 첫번째 인덱스에 있는 숫자 1을 첫 행의 가운데에 위치하도록 함.
	int i = 0;	// 행
	int j = center;	// 열

	for (int k = 0; k < num; k++)
	{// 각각의 index에 선언하고자 하는 배열의 크기만큼을 가리키게 한다.
		num_arr[k] = new int[num];		// 각각의 행에 크기가 num인 배열을 할당
	}

	for (int k = 1; k <= num * num; k++)	// num * num 개 만큼의 원소 생성
	{
		num_arr[i][j] = k;	// k는 출력되는 숫자
		if (k % num == 0)	// k가 num과 같아지면 열을 아래로
		{
			i++;
		}
		else	// 아니라면 열은 한 칸 위로, 행은 옆으로
		{
			i--;
			j++;
		}
		if (i < 0)	// 열이 맨 위로 가면, 열을 가장 아래줄로 이동
		{
			i = num - 1;
		}
		if (j >= num)	// 행이 끝까지 이동하면 다시 첫번째 행으로 이동
		{
			j = 0;
		}
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{// 출력
			cout << num_arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int k = 0; k < num; k++)
	{
		delete[] num_arr[k];	// 안쪽 배열 해제
	}
	delete[] num_arr;	// 바깥 배열 해제

	return 0;
}
/*
3을 입력

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

4. (k % num == 0) -> i++, 아래 if로 빠지지 않기 때문에 j는 그대로
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

7. (k % num == 0) -> i++, 아래 if로 빠지지 않기 때문에 j는 그대로
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
루프 종료

*/