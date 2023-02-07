// name space 예제

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//namespace Seoul
//{
//	string num = "02";
//	string LM = "남산 타워";
//}
//
//namespace Busan
//{
//	string num = "051";
//	string LM = "해운대";
//}
//
//using namespace Busan;
//
//int main()
//{
//	cout << "서울의 지역번호 : " << Seoul::num << endl;
//	cout << "부산의 지역번호 : " << num << endl;
//
//	cout << "서울의 랜드마크 : " << Seoul::LM << endl;
//	cout << "부산의 랜드마크 : " << LM << endl;
//
//	return 0;
//}

// 실습 1 회원 명부 작성하기
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() 
//{
//	string name;
//	int pw;
//
//	cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요. \n";
//
//	ofstream login("member.txt");
//	
//	if (login.fail())
//	{
//		cout << "파일 없음" << endl;
//		return -1;
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << i + 1 << "번째 회원 : ";
//		cin >> name >> pw;
//		login << name << " " << pw << "\n";
//	}
//	login.close();
//
//	ifstream login_i("member.txt");
//	if (login_i.fail())
//	{
//		cout << "파일 없음" << endl;
//		return 1;
//	}
//	
//	string line, file_content = "";
//	while (getline(login_i, line))
//	{
//		file_content += line + "\n";
//	}
//	cout << "----------회원 명부 파일 읽기-----------\n" << file_content;
//
//	return 0;
//}

// 실습2 회원 명부를 응용한 로그인 기능
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string name, pw, line;
//	int i = 0;
//	ifstream login_i("member.txt");
//
//	cout << "이름을 입력하세요. : ";
//	cin >> name;
//	cout << "비번을 입력하세요. : ";
//	cin >> pw;
//
//	if (login_i.fail())
//	{
//		cout << "파일 없음" << endl;
//		return 1;
//	}
//	while (getline(login_i, line))
//	{
//		if (line == name + " " + pw)
//			i++;
//	}
//	switch (i)
//	{
//	case 0:
//	{
//		cout << "로그인 실패";
//		break;
//	}
//	default:
//	{
//		cout << "로그인 성공";
//		break;
//	}
//	}
//
//	return 0;
//}
/*
// 번외 실습
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	string name, pw;

	ofstream login("member.txt");

	for (int i = 0; i < 3; i++)
	{
		cin >> name >> pw;
		login << name << " " << pw << "\n";
	}
	login.close();

	ifstream login_i("member.txt");
	cin >> name >> pw;
	login << name << " " << pw << "\n";
	
	string line, file_content = "";
	while (getline(login_i, line))
	{
		file_content += line + "\n";
	}
	cout << "----------회원 명부 파일 읽기-----------\n" << file_content;

	return 0;
}
*/