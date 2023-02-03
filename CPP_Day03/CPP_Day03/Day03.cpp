// --------- array (배열) --------------
#include<iostream>
#include<string>

int main()
{
	// std::string friends[3] = {"홍길동", "성춘향", "코딩온"};	// 배열 한번에 선언
	std::string friends[3];

	friends[0] = "홍길동";
	friends[1] = "성춘향";
	friends[2] = "코딩온";

	std::cout << friends[0] << std::endl;

	double nums1[4] = { 1, 5, 2.5 };
	nums1[3] = 9.9;
	std::cout << nums1[3];

	std::string fruit[2][3] = // 2개의 배열과 그 안에 있는 3개의 값
	{ 
		{"apple","grape", "lemon"},
		{"orange","banana", "melon"}
	};

	

	return 0;
}