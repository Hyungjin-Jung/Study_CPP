// name space ����

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//namespace Seoul
//{
//	string num = "02";
//	string LM = "���� Ÿ��";
//}
//
//namespace Busan
//{
//	string num = "051";
//	string LM = "�ؿ��";
//}
//
//using namespace Busan;
//
//int main()
//{
//	cout << "������ ������ȣ : " << Seoul::num << endl;
//	cout << "�λ��� ������ȣ : " << num << endl;
//
//	cout << "������ ���帶ũ : " << Seoul::LM << endl;
//	cout << "�λ��� ���帶ũ : " << LM << endl;
//
//	return 0;
//}

// �ǽ� 1 ȸ�� ��� �ۼ��ϱ�
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
//	cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���. \n";
//
//	ofstream login("member.txt");
//	
//	if (login.fail())
//	{
//		cout << "���� ����" << endl;
//		return -1;
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << i + 1 << "��° ȸ�� : ";
//		cin >> name >> pw;
//		login << name << " " << pw << "\n";
//	}
//	login.close();
//
//	ifstream login_i("member.txt");
//	if (login_i.fail())
//	{
//		cout << "���� ����" << endl;
//		return 1;
//	}
//	
//	string line, file_content = "";
//	while (getline(login_i, line))
//	{
//		file_content += line + "\n";
//	}
//	cout << "----------ȸ�� ��� ���� �б�-----------\n" << file_content;
//
//	return 0;
//}

// �ǽ�2 ȸ�� ��θ� ������ �α��� ���
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
//	cout << "�̸��� �Է��ϼ���. : ";
//	cin >> name;
//	cout << "����� �Է��ϼ���. : ";
//	cin >> pw;
//
//	if (login_i.fail())
//	{
//		cout << "���� ����" << endl;
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
//		cout << "�α��� ����";
//		break;
//	}
//	default:
//	{
//		cout << "�α��� ����";
//		break;
//	}
//	}
//
//	return 0;
//}
/*
// ���� �ǽ�
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
	cout << "----------ȸ�� ��� ���� �б�-----------\n" << file_content;

	return 0;
}
*/