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

//// 실습2 회원 명부를 응용한 로그인 기능
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

//// 실습2 회원 명부를 응용한 로그인 기능 (선생님 풀이)
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string name_in, pw_in, name, pw; 
//
//	cout << "이름을 입력하세요. : ";
//	cin >> name_in;
//	cout << "비밀번호를 입력하세요. : ";
//	cin >> pw_in;
//
//	ifstream login_i("member.txt");
//
//	if (login_i.fail())
//	{
//		cout << "파일 없음" << endl;
//		return 1;
//	}
//	bool is_login = false;	// 로그인 여부를 저장하는 변수
//	while (login_i >> name >> pw)
//	{
//		if (name_in == name && pw_in == pw)
//		{
//			// 로그인 성공
//			is_login = true;
//			break;
//		}
//	}
//	if (is_login)
//		cout << "로그인 성공" << endl;
//	else
//		cout << "로그인 실패" << endl;
//
//	return 0;
//}

// 번외 실습
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string name_in, pw_in, name, pw;
	cout << "이름을 입력하세요. : ";		// 사용자에게 "이름을 입력하세요: "라는 메세지를 출력한 뒤 이름 입력받기
	cin >> name_in;
	cout << "비밀번호를 입력하세요. : ";	// 사용자에게 "비밀번호를 입력하세요: "라는 메세지를 출력한 뒤 비번 입력 받기
	cin >> pw_in;	


	ifstream file("member.txt");
	if (file.fail())
	{
		cout << "파일 없음" << endl;
		return 1;
	}

	// member.txt. 에서 한 줄씩 "이름"과 "비밀번호"를 검사하여 로그인 성공시 "로그인 성공" 실패시 "로그인 실패" 출력
	//name_in + " " + pw_in 
	bool is_login = false;// 로그인 성공 여부를 저장하는 변수
	while (file >> name >> pw) { // getline(file, line)
		if (name_in == name && pw_in == pw) {
			is_login = true;
			break;
		}
	}
	file.close();

	if (is_login) {
		cout << "로그인 성공\n";
		string tel_in, tel, member_tel_tmp;
		cout << "전화번호를 입력해 주세요. ";
		cin >> tel_in;	//파일을 읽어 중복 name이 있는지 확인 후 있다면 전화번호만 수정
		ifstream tel_file_r("member_tel.txt");

		bool is_modify = false;	// 수정여부 확인 변수
		if (!tel_file_r.fail())
		{
			while (tel_file_r >> name >> tel) {
				if (name == name_in) { // 이미 파일에 저장된 회원
					is_modify = true;
					member_tel_tmp += name + " " + tel_in + "\n";
				}
				else {
					member_tel_tmp += name + " " + tel + "\n";
				}
			}
		}
		//파일 쓰기 -> 회원 이름과 전화번호 저장
		ofstream tel_file;
		if (is_modify)
		{// 덮어 쓰기
			tel_file.open("member_tel.txt");	
			tel_file << member_tel_tmp;		
		}
		else
		{//이어 쓰기
			tel_file.open("member_tel.txt", std::ios::app);
			tel_file << name_in + " " + tel_in + "\n";
		}
		
		if (tel_file.fail())
		{
			cout << "파일 없음" << endl;
			return 1;
		}

		tel_file.close();
	}
	else  cout << "로그인 실패";

	return 0;
}
