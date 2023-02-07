////--------------name space (이름공간)----------------
//// 식별자를 더 잘 구분하여 오류를 최소화하기 위한 기능
//
//#include<iostream>
//#include<string>
//
//namespace ns_test
//{
//	int num = 0;
//
//	void test()
//	{
//		std::cout << num << std::endl;
//		std::cout << "Hello World" << std::endl;
//	}
//}
//
//namespace ns_test1 
//{
//	namespace ns_test2 
//	{
//		int num = 0;
//	}
//}
//// 위와 같이 네임스페이스가 이중으로 있을 때는 아래와 같이 접근한다.
////std::cout << ns_test1::ns_test2::num;
//
//
////using namespace std; // std 네임스페이스 내에 있는 모든 요소에 대한 접근을 풀어줌.
////using namespace ns_test;	// ns_test 내에 있는 모든 요소에 대한 접근을 풀어준다.
////using std::cout; // std 네임스페이스 내에 있는 cout에 대한 접근을 풀어줌.
////using std::cin; // std 네임스페이스 내에 있는 cin에 대한 접근을 풀어줌.
//
//void bbb()
//{
//	ns_test::num = 6;
//	std::cout << "bbb : " << ns_test::num << std::endl;
//}
//
//using ns_test::num;
//
//void aaa()
//{
//	num = 7;
//	std::cout << "aaa : " << num << std::endl;
//}
//
//int main()
//{
//	//ns_test::num = 1;	//num = 1; 둘이 같아짐 (using namespace ns_test; 를 사용했을 때)
//	
//	using namespace ns_test;	// 메인 함수 안에서 ns_test:: 생략 가능하게 함.
//
//	ns_test::num = 5;
//	ns_test::test();
//	int num = 0;
//
//	std::cout << ns_test::num << std::endl;
//	std::cout << num << std::endl;
//
//	bbb();
//	aaa();
//
//	return 0;
//}


//#include<iostream>
//#include<string>	// 문자열을 다루는 라이브러리, getline을 사용.
//#include<fstream>	// 파일을 다루기 위한 기능 제공
//
//using std::ifstream;	// input file stream
//using std::cout;
//
//int main()
//{
//	ifstream file; // std::ifstream file
//	file.open("test.txt");	// 파일명에 해당하는 파일 열기
//	file.fail();	// 파일을 여는 것에 실패하면 true, 성공하면 false
//
//	if (file.fail())
//	{
//		cout << "파일 없음" << std::endl;
//
//		return 1;
//	}
//
//	std::string str, str2, line;
//	//file >> str;	// 파일 안의 내용을 str에 저장, 공백 (띄어쓰기, 개행)전까지 읽어옴.
//	/*
//	while (file >> str >> str2)
//	{
//		cout << str << " " << str2;
//		cout << std::endl;
//	}
//	*/
//	//std::getline(file, line);	// file의 내용을 한 줄씩 읽어서 line에 저장. (개행 기준)
//
//	while (std::getline(file, line))
//	{
//		cout << line << std::endl;
//	}
//
//	file.close();	// file 닫기
//
//	return 0;
//}


//#include<iostream>
//#include<string>	
//#include<fstream>	
//
//using std::ofstream;	// output file stream
//using std::cout;
//using std::cin;
//using std::endl;
//
//int main()
//{
//	//ifstream : 파일 -> 프로그램
//	//ofstream : 프로그램 -> 파일
//	//ofstream file;
//	//file.open ("test1.txt");
//	ofstream file("test1.txt", std::ios::out | std::ios::app); // 열기 모드 (뒤에 이어서 써짐)
//	// ofstream file("test1.txt")	// 쓰기 모드 (덮어 쓰기)
//
//	if (file.fail())
//	{
//		cout << "파일 없음" << endl;
//		return 1;	// 보통 0은 참임을 의미
//	}
//	
//	file << "hello world!";	
//
//
//	return 0;
//}
/*
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
// input file stream -> ifstream
// ouput file stream -> ofstream

bool checkFileOpen(std::ifstream& file) {
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return false;
	}
	else return true;
}

int main() 
{
	std::ifstream file_r("test.txt");
	if (!checkFileOpen(file_r)) return -1;

	std::string line, file_content = "";
	while (std::getline(file_r, line)) 
	{
		// file_content = file_content + line + "\n";
		file_content += line + "\n";
	}
	cout << file_content;

	std::ofstream file("test1.txt");
	if (file.fail()) 
	{
		cout << "파일 없음" << endl;
		return -1;
	}

	file << file_content;

	file.close();

	return 0;
}
*/