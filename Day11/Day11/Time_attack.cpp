/*
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

// Ÿ�Ӿ��� �����ձ� ����
int main()
{
	clock_t startTime = clock();
	// ~~~~~~~ ( Ÿ�Ӿ��� �ڵ� )

	string input, output = "airplane";
	int n, timer = 0, count = 0, count_check;

	while (1)
	{
		n = output.size();
		cout << output << endl;

		cout << "���� �ܾ �Է��ϼ���. : ";
		cin >> input;

		if (input[0] == output[n - 1])
		{
			output += " -> " + input;
			count++;
			//cout << endl;
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. \n";
		}

		clock_t endTime = clock();
		timer = (endTime - startTime) / CLOCKS_PER_SEC;

		cout << "����� �ð�: " << timer << endl << endl;

		if (timer > 10)
		{
			if (count_check != count)
			count--;

			cout << "���� ���� \n" << "�� �Է��� �ܾ� ���� : " << count;
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

// Ÿ�Ӿ��� �����ձ� ����
int main()
{
	clock_t startTime = clock();

	string input, output = "airplane";
	int n, timer = 0, count = 0;

	while (1)
	{
		n = output.size();
		cout << output << endl;

		cout << "���� �ܾ �Է��ϼ���. : ";
		cin >> input;

		if (input[0] == output[n - 1])
		{
			output += " -> " + input;
			//cout << endl;
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. \n";
			count--;
		}

		clock_t endTime = clock();
		timer = (endTime - startTime) / CLOCKS_PER_SEC;

		cout << "����� �ð�: " << timer << endl << endl;

		if (timer > 30)
		{
			cout << "���� ���� \n" << "�� �Է��� �ܾ� ���� : " << count;
			break;
		}
		count++;
	}

	return 0;
}
