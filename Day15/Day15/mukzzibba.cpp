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
		return "����";
	}
	case 2:
	{
		return "����";
	}
	case 3:
	{
		return "��";
	}
	}
}

void Case(string user)
{

}

// ����� ����
int main()
{
	string user;

	while (1)
	{
		cout << "����������!!" << endl;
		cin >> user;
		cout << com();

	}

	return 0;
}
