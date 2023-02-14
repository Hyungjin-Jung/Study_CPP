#include<iostream>
#include<vector>
//#include"Snack.h"
#include"Chocolate.h"
#include"Candy.h"

int main()
{
	int type;
	vector<Snack*> snack_basket;

	while (1)
	{
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�. (1: ����, 2: ���ݸ�, 0: ����) : ";
		cin >> type;

		if (type == 1)
		{
			string taste;
			cout << "���� �Է��ϼ���. : ";
			cin >> taste;
			snack_basket.push_back(new Candy(taste));
		}
		else if (type == 2)
		{
			string shape;
			cout << "����� �Է��ϼ���. : ";
			cin >> shape;
			snack_basket.push_back(new Chocolate(shape));
		}
		else if (type == 0)
		{
			cout << "���� \n";
			break;
		}
		else
		{
			cout << "0 ~ 2 ������ ���ڸ� �Է��ϼ���. \n";
		}

		cout << endl;
	}

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�. \n" << endl;

	int size = snack_basket.size();

	for (Snack* snack : snack_basket)
	{
		snack->show_info();
	}

	for (Snack* snack : snack_basket)
	{
		delete snack;
	}

	snack_basket.clear();

	return 0;
}
