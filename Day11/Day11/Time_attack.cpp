/*
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

// 타임어택 끝말잇기 게임
int main()
{
	clock_t startTime = clock();
	// ~~~~~~~ ( 타임어택 코드 )

	string input, output = "airplane";
	int n, timer = 0, count = 0, count_check;

	while (1)
	{
		n = output.size();
		cout << output << endl;

		cout << "다음 단어를 입력하세요. : ";
		cin >> input;

		if (input[0] == output[n - 1])
		{
			output += " -> " + input;
			count++;
			//cout << endl;
		}
		else
		{
			cout << "잘못된 입력입니다. \n";
		}

		clock_t endTime = clock();
		timer = (endTime - startTime) / CLOCKS_PER_SEC;

		cout << "경과한 시간: " << timer << endl << endl;

		if (timer > 10)
		{
			if (count_check != count)
			count--;

			cout << "게임 종료 \n" << "총 입력한 단어 개수 : " << count;
			break;
		}
		count_check = count;
	}

	return 0;
}
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

// 타임어택 끝말잇기 게임
int main()
{
	clock_t startTime = clock();

	string input, output = "airplane";
	int n, timer = 0, count = 0;

	while (1)
	{
		n = output.size();
		cout << output << endl;

		cout << "다음 단어를 입력하세요. : ";
		cin >> input;

		if (input[0] == output[n - 1])
		{
			output += " -> " + input;
			//cout << endl;
		}
		else
		{
			cout << "잘못된 입력입니다. \n";
			count--;
		}

		clock_t endTime = clock();
		timer = (endTime - startTime) / CLOCKS_PER_SEC;

		cout << "경과한 시간: " << timer << endl << endl;

		if (timer > 30)
		{
			cout << "게임 종료 \n" << "총 입력한 단어 개수 : " << count;
			break;
		}
		count++;
	}

	return 0;
}
