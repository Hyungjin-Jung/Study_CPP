#include <iostream>
#include <string>

int main()
{
	std::string city[5] = {"korea", "japan", "usa", "canada", "china"};
	for (auto c : city)
	{
		std::cout << c << std::endl;
	}

	//double grade[5];
	//double avg = 0;
	//int i = 1;

	//for (double g : grade)
	//{	
	//	std::cout << i << ". �л��� ������ �Է��ϼ���. : ";
	//	std::cin >> g;
	//	avg += g;
	//	i++;
	//}
	//std::cout << "���� ��� : " << avg / 5 << std::endl;

	return 0;
}