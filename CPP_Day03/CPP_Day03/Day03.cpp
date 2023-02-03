// --------- array (배열) --------------
#include<iostream>
#include<string>

int main()
{
	// std::string friends[3] = {"홍길동", "성춘향", "코딩온"};	// 배열 한번에 선언
	
	std::string friends[3];	// 배열 하나씩 선언
	friends[0] = "홍길동";
	friends[1] = "성춘향";
	friends[2] = "코딩온";

	std::cout << friends[0] << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << friends[i] << std::endl;
	}

	for ( std::string fri : friends)	// for each문
	{
		// fri = "홍길동"
		// fri = "성춘향" 로 바뀜
		// fri = "코딩온" 로 바뀜
		std::cout << fri << std::endl;
	}

	double nums1[4] = { 1, 5, 2.5 };
	nums1[3] = 9.9;
	std::cout << nums1[3] << std::endl;

	std::string fruit[2][3] = // 2개의 배열과 그 안에 있는 3개의 값 (좌표라고 생각하면 쉬울듯 하다.)
	{ 
		{"apple","grape", "lemon"},
		{"orange","banana", "melon"}
	};

	std::cout << fruit[0][1] << std::endl;	// grape 출력

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << fruit[i][j] << std::endl;
		}
	}

	for (auto &fru : fruit )
	{
		for (auto fru2 : fru)	// std::string 대신 auto 사용
		{
			std::cout << fru2 << std::endl;
		}
	}


	return 0;
}