/*
#include <iostream>

int functionTestInt();
double functionTestDouble();
std::string functionStr();
void functionTestVoid(int, int, std::string);
int functionTestSum(int, int, std::string);
int functionTestSum(int, int);

int main() {
	functionTestVoid(2, 3, "+");
	functionTestVoid(3, 4, "+");

	int result = functionTestSum(2, 3, "+");
	int result2 = functionTestSum(result, 4, "+");

	std::cout << result + result2 << std::endl;


	int num = functionTestSum(2, 3); // 5
	//num = 5;
	std::cout << num << std::endl;
	std::cout << functionTestSum(4, 7);

	return 0;
}

int functionTestSum(int n1, int n2) {
	return n1 + n2;
}

int functionTestSum(int n1, int n2, std::string op) {
	int result = 0;
	if (op == "+") {
		result = n1 + n2;
	}
	else if (op == "-") {
		result = n1 - n2;
	}

	return result;
}

void functionTestVoid(int n1, int n2, std::string op) {
	int result = 0;
	if (op == "+") {
		result = n1 + n2;
	}
	else if (op == "-") {
		result = n1 - n2;
	}

	std::cout << result << std::endl;
}

std::string functionStr() {
	std::cout << "안녕하세요";
	std::cout << "안녕하세요";
	std::cout << "안녕하세요";
	std::cout << "안녕하세요";

	return "hello";
}

double functionTestDouble() {
	return 5.4;
}

int functionTestInt() {
	return 5;
}
*/

//#include<iostream>
//
//int add(int n1, int n2)
//{
//	return n1 + n2;
//}
//int min(int n1, int n2)
//{
//	if (n1 > n2)
//		return n1 - n2;
//	else
//		return n2 - n1;
//}
//int mul(int n1, int n2)
//{
//	return n1 * n2;
//}
//double divide(int n1, int n2)
//{
//	return (double)n1 / (double)n2;
//}
//
//int main()
//{
//	int n1 = 0, n2 = 0; 
//	double result = 0;
//	char op;
//	std::cout << "식을 입력해주세요. \n";
//	std::cin >> n1 >> op >> n2;
//
//	switch (op)
//	{
//		case '+':
//		{
//			result = add(n1, n2);
//			break;
//		}
//		case '-':
//		{
//			result = min(n1, n2);
//			break;
//		}
//		case '*':
//		{
//			result = mul(n1, n2);
//			break;
//		}
//		case '/':
//		{
//			result = divide(n1, n2);
//			break;
//		}
//	}
//	std::cout << "결과: " << result;
//
//	return 0;
//}