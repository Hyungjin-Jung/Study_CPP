#include <iostream>
#include <string>

int main()
{
	//std::string city[5] = {"korea", "japan", "usa", "canada", "china"};
	//for (auto c : city)
	//{
	//	std::cout << c << std::endl;
	//}

	int grade[5];
	double avg = 0;
	int i = 1;

	for (int g : grade)
	{	
		std::cout << i << ". 학생의 성적을 입력하세요. : ";
		std::cin >> g;
		avg += g;
		i++;
	}
	std::cout << "성적 평균 : " << avg / 5 << std::endl;

	return 0;
}