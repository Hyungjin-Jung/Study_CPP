#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

string com()
{
	std::srand(time(NULL));
	int num = std::rand() % 3 + 1;

	switch (num)
	{
	case 1:
	{
		return "가위";
	}
	case 2:
	{
		return "바위";
	}
	case 3:
	{
		return "보";
	}
	}
}

void Case(string user)
{

}

// 묵찌빠 게임
int main()
{
	string user;

	while (1)
	{
		cout << "가위바위보!!" << endl;
		cin >> user;
		cout << com();

	}

	return 0;
}
