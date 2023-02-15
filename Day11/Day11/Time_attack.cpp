#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

void baskin(int count, int num)
{

}
// 배스킨라빈스 31 게임
int main()
{
	int num = 0, count = 1;
	bool turn = false;

	while (1)
	{
		std::srand(time(NULL));
		int com = std::rand() % 3 + 1;

		cout << "개수를 입력하세요. : ";
		cin >> num;
		cout << "사용자가 부른 숫자!! \n";
		for (int i = 0; i < num + com; i++)
		{
			if (count + i == num)
			{
				cout << "컴퓨터가 부른 숫자!! \n";
			}
			cout << count + i << endl;
		}
		count += num + com;
	}

	return 0;
}