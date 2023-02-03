// --------- array (�迭) --------------
#include<iostream>
#include<string>

int main()
{
	// std::string friends[3] = {"ȫ�浿", "������", "�ڵ���"};	// �迭 �ѹ��� ����
	
	std::string friends[3];	// �迭 �ϳ��� ����
	friends[0] = "ȫ�浿";
	friends[1] = "������";
	friends[2] = "�ڵ���";

	std::cout << friends[0] << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << friends[i] << std::endl;
	}

	for ( std::string fri : friends)	// for each��
	{
		// fri = "ȫ�浿"
		// fri = "������" �� �ٲ�
		// fri = "�ڵ���" �� �ٲ�
		std::cout << fri << std::endl;
	}

	double nums1[4] = { 1, 5, 2.5 };
	nums1[3] = 9.9;
	std::cout << nums1[3] << std::endl;

	std::string fruit[2][3] = // 2���� �迭�� �� �ȿ� �ִ� 3���� �� (��ǥ��� �����ϸ� ����� �ϴ�.)
	{ 
		{"apple","grape", "lemon"},
		{"orange","banana", "melon"}
	};

	std::cout << fruit[0][1] << std::endl;	// grape ���

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << fruit[i][j] << std::endl;
		}
	}

	for (auto &fru : fruit )
	{
		for (auto fru2 : fru)	// std::string ��� auto ���
		{
			std::cout << fru2 << std::endl;
		}
	}


	return 0;
}