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

//// �ǽ�2 ȸ�� ��θ� ������ �α��� ���
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

//// �ǽ�2 ȸ�� ��θ� ������ �α��� ��� (������ Ǯ��)
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
//	cout << "�̸��� �Է��ϼ���. : ";
//	cin >> name_in;
//	cout << "��й�ȣ�� �Է��ϼ���. : ";
//	cin >> pw_in;
//
//	ifstream login_i("member.txt");
//
//	if (login_i.fail())
//	{
//		cout << "���� ����" << endl;
//		return 1;
//	}
//	bool is_login = false;	// �α��� ���θ� �����ϴ� ����
//	while (login_i >> name >> pw)
//	{
//		if (name_in == name && pw_in == pw)
//		{
//			// �α��� ����
//			is_login = true;
//			break;
//		}
//	}
//	if (is_login)
//		cout << "�α��� ����" << endl;
//	else
//		cout << "�α��� ����" << endl;
//
//	return 0;
//}

// ���� �ǽ�
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string name_in, pw_in, name, pw;
	cout << "�̸��� �Է��ϼ���. : ";		// ����ڿ��� "�̸��� �Է��ϼ���: "��� �޼����� ����� �� �̸� �Է¹ޱ�
	cin >> name_in;
	cout << "��й�ȣ�� �Է��ϼ���. : ";	// ����ڿ��� "��й�ȣ�� �Է��ϼ���: "��� �޼����� ����� �� ��� �Է� �ޱ�
	cin >> pw_in;	


	ifstream file("member.txt");
	if (file.fail())
	{
		cout << "���� ����" << endl;
		return 1;
	}

	// member.txt. ���� �� �پ� "�̸�"�� "��й�ȣ"�� �˻��Ͽ� �α��� ������ "�α��� ����" ���н� "�α��� ����" ���
	//name_in + " " + pw_in 
	bool is_login = false;// �α��� ���� ���θ� �����ϴ� ����
	while (file >> name >> pw) { // getline(file, line)
		if (name_in == name && pw_in == pw) {
			is_login = true;
			break;
		}
	}
	file.close();

	if (is_login) {
		cout << "�α��� ����\n";
		string tel_in, tel, member_tel_tmp;
		cout << "��ȭ��ȣ�� �Է��� �ּ���. ";
		cin >> tel_in;	//������ �о� �ߺ� name�� �ִ��� Ȯ�� �� �ִٸ� ��ȭ��ȣ�� ����
		ifstream tel_file_r("member_tel.txt");

		bool is_modify = false;	// �������� Ȯ�� ����
		if (!tel_file_r.fail())
		{
			while (tel_file_r >> name >> tel) {
				if (name == name_in) { // �̹� ���Ͽ� ����� ȸ��
					is_modify = true;
					member_tel_tmp += name + " " + tel_in + "\n";
				}
				else {
					member_tel_tmp += name + " " + tel + "\n";
				}
			}
		}
		//���� ���� -> ȸ�� �̸��� ��ȭ��ȣ ����
		ofstream tel_file;
		if (is_modify)
		{// ���� ����
			tel_file.open("member_tel.txt");	
			tel_file << member_tel_tmp;		
		}
		else
		{//�̾� ����
			tel_file.open("member_tel.txt", std::ios::app);
			tel_file << name_in + " " + tel_in + "\n";
		}
		
		if (tel_file.fail())
		{
			cout << "���� ����" << endl;
			return 1;
		}

		tel_file.close();
	}
	else  cout << "�α��� ����";

	return 0;
}
