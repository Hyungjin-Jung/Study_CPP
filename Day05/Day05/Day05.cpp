////--------------name space (�̸�����)----------------
//// �ĺ��ڸ� �� �� �����Ͽ� ������ �ּ�ȭ�ϱ� ���� ���
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
//// ���� ���� ���ӽ����̽��� �������� ���� ���� �Ʒ��� ���� �����Ѵ�.
////std::cout << ns_test1::ns_test2::num;
//
//
////using namespace std; // std ���ӽ����̽� ���� �ִ� ��� ��ҿ� ���� ������ Ǯ����.
////using namespace ns_test;	// ns_test ���� �ִ� ��� ��ҿ� ���� ������ Ǯ���ش�.
////using std::cout; // std ���ӽ����̽� ���� �ִ� cout�� ���� ������ Ǯ����.
////using std::cin; // std ���ӽ����̽� ���� �ִ� cin�� ���� ������ Ǯ����.
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
//	//ns_test::num = 1;	//num = 1; ���� ������ (using namespace ns_test; �� ������� ��)
//	
//	using namespace ns_test;	// ���� �Լ� �ȿ��� ns_test:: ���� �����ϰ� ��.
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
//#include<string>	// ���ڿ��� �ٷ�� ���̺귯��, getline�� ���.
//#include<fstream>	// ������ �ٷ�� ���� ��� ����
//
//using std::ifstream;	// input file stream
//using std::cout;
//
//int main()
//{
//	ifstream file; // std::ifstream file
//	file.open("test.txt");	// ���ϸ� �ش��ϴ� ���� ����
//	file.fail();	// ������ ���� �Ϳ� �����ϸ� true, �����ϸ� false
//
//	if (file.fail())
//	{
//		cout << "���� ����" << std::endl;
//
//		return 1;
//	}
//
//	std::string str, str2, line;
//	//file >> str;	// ���� ���� ������ str�� ����, ���� (����, ����)������ �о��.
//	/*
//	while (file >> str >> str2)
//	{
//		cout << str << " " << str2;
//		cout << std::endl;
//	}
//	*/
//	//std::getline(file, line);	// file�� ������ �� �پ� �о line�� ����. (���� ����)
//
//	while (std::getline(file, line))
//	{
//		cout << line << std::endl;
//	}
//
//	file.close();	// file �ݱ�
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
//	//ifstream : ���� -> ���α׷�
//	//ofstream : ���α׷� -> ����
//	//ofstream file;
//	//file.open ("test1.txt");
//	ofstream file("test1.txt", std::ios::out | std::ios::app); // ���� ��� (�ڿ� �̾ ����)
//	// ofstream file("test1.txt")	// ���� ��� (���� ����)
//
//	if (file.fail())
//	{
//		cout << "���� ����" << endl;
//		return 1;	// ���� 0�� ������ �ǹ�
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
		cout << "���� ����" << endl;
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
		cout << "���� ����" << endl;
		return -1;
	}

	file << file_content;

	file.close();

	return 0;
}
*/