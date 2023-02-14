
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;
// 랜덤한 숫자를 뽑는 코드
int main()
{
	std::srand(time(NULL));
	
	int lotto[6] = {};
	int count = 0;

	while (count < 6)
	{
		bool is_dup = false;
		int num = std::rand() % 45 + 1;
		for (int i = 0; i < 6; i++)
		{
			if (lotto[i] == num)
			{
				is_dup = true;
				break;
			}
		}
		if (!is_dup)
		{
			lotto[count] = num;
			count++;
		}
	}
	cout << "로또 번호는 : ";
	for (int i = 0; i < 6; i++)
	{
		cout << lotto[i] << " ";
	}

	return 0;
}

/*
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;
// 랜덤한 숫자를 뽑는 코드
int main() {
	std::srand(time(NULL));
	int lotto[6] = { };

	for (int i = 0; i < 6; i++) 
	{
		int num = std::rand() % 45 + 1;
		lotto[i] = num;
		for (int j = 0; j < i; j++) 
		{
			if (lotto[j] == num) 
			{
				i--;
			}
		}
	}

	for (int i = 0; i < 6; i++) 
	{
		cout << lotto[i] << " ";
	}

	return 0;
}
*/