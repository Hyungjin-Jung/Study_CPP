// --------- array (�迭) --------------
#include<iostream>
#include<string>

int main()
{
	// std::string friends[3] = {"ȫ�浿", "������", "�ڵ���"};	// �迭 �ѹ��� ����
	std::string friends[3];

	friends[0] = "ȫ�浿";
	friends[1] = "������";
	friends[2] = "�ڵ���";

	std::cout << friends[0] << std::endl;

	double nums1[4] = { 1, 5, 2.5 };
	nums1[3] = 9.9;
	std::cout << nums1[3];

	std::string fruit[2][3] = // 2���� �迭�� �� �ȿ� �ִ� 3���� ��
	{ 
		{"apple","grape", "lemon"},
		{"orange","banana", "melon"}
	};

	

	return 0;
}