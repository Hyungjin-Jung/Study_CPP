//#include<iostream>
//
//void oddeven(int num)
//{
//	num % 2 ? std::cout << "홀수" : std::cout << "짝수";
//}
//
//int main()
//{
//	int num = 0; 
//	std::cin >> num;
//	oddeven(num);
//
//	return 0;
//}

#include<iostream>

int size(int n1, int n2, int n3)
{
	if (n1 > n2 && n1 > n3)
		return n1;
	else if (n2 > n1 && n2 > n3)
		return n2;
	else
		return n3;
}

int main()
{
	int n1 = 0, n2 = 0, n3 = 0; 
	std::cin >> n1 >>n2 >> n3;

	std::cout << size(n1, n2, n3) << std::endl;

	//int num2;
	//int i = 0;

	//do
	//{
	//	std::cout << "숫자를 입력하세요. (0, exit) : ";
	//	std::cin >> num2;
	//	i += num2;
	//} while (num2);
	//std::cout << "사용자가 입력한 수의 합은 : " << i;

	return 0;
}