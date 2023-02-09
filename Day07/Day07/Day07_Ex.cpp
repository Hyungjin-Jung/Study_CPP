
#include <iostream>

using namespace std;

class Shape 
{
protected:
	int num;
	double length1;
public:
	Shape(int num, int length)
	{
		this->num = num;
		this->length1 = length;
	}
	void printinfo() 
	{
		cout << "���� ���� : " << num << "\n�غ��� ���� : " << length1 << endl;
	}
};

class Rectangle : public Shape 
{
	double height1;
public:
	Rectangle(double length, double height, int num) : Shape(num, length)
	{
		this->height1 = height;
	}
	void area_R()
	{
		cout << "�簢���� ���� : " << length1 * height1 << endl;
	}
	
};

class Triangle : public Shape
{
	double height2;
public:
	Triangle(double length, double height, int num) : Shape(num, length)
	{
		this->height2 = height;
	}
	void area_T()
	{
		cout << "�ﰢ���� ���� : " << length1 * height2 / 2 << endl;
	}
};

int main() 
{
	double length = 0, height = 0;
	int num = 1;

	cout << "���� ������ �Է����ּ���. : ";
	cin >> num;
	cout << "�غ��� ���̸� �Է����ּ���. : ";
	cin >> length;
	cout << "������ ���̸� �Է����ּ���. : ";
	cin >> height;

	Shape S(num, length);
	Rectangle R(length, height, num);
	Triangle T(length, height, num);

	switch (num)
	{
	case 4:
	{
		S.printinfo();
		R.area_R();
		break;
	}
	case 3:
	{
		S.printinfo();
		T.area_T();
		break;
	}
	default:
		cout << "���� ������ �߸� �Է��ϼ̽��ϴ�. \n";
	}

	return 0;
}

/*
#include <iostream>

using namespace std;

class Student
{
protected:
	string name, s_name, s_id;
	int age;	

public:
	void input(string name_S, string s_name_S, string s_id_S, int age_S)
	{
		name = name_S;
		s_name = s_name_S;
		s_id = s_id_S;
		age = age_S;
	}
	void lunch()
	{
		cout << "\n������ �н� \n";
		cout << "�̸�: " << name << endl;
		cout << "���б�: " << s_name << endl;
		cout << "�й�: " << s_id << endl;
		cout << "����: " << age << endl;
	}
};

class Kim : public Student
{
	string name_K, s_name_K, s_id_K;
	int age;

public:
	Kim(string name_K, string s_name_K, string s_id_K, int age_K)
	{
		name = name_K;
		s_name = s_name_K;
		s_id = s_id_K;
		age = age_K;
	}
	void lunch()
	{
		cout << "\n������ �谡�� ��� \n";
		cout << "�̸�: " << name << endl;
		cout << "���б�: " << s_name << endl;
		cout << "�й�: " << s_id << endl;
		cout << "����: " << age << endl;
	}
};

class Baek : public Student
{
	string name_B, s_name_B, s_id_B;
	int age_B;

public:
	Baek(string name_B, string s_name_B, string s_id_B, int age_B)
	{
		name = name_B;
		s_name = s_name_B;
		s_id = s_id_B;
		age = age_B;
	}

	void lunch()
	{
		cout << "\n������ ������ ���� \n";
		cout << "�̸�: " << name << endl;
		cout << "���б�: " << s_name << endl;
		cout << "�й�: " << s_id << endl;
		cout << "����: " << age << endl;
	}
};

int main() 
{
	string name, s_name, s_id;
	int age;
	int num;

	cout << "1. �谡��,  2. ��'s ����,  3. �н� : ";
	cin >> num;
	cout << "�̸�: ";
	cin >> name;
	cout << "���б�: ";
	cin >> s_name;
	cout << "�й�: ";
	cin >> s_id;
	cout << "����: ";
	cin >> age;
	
	Student S;
	Kim K(name, s_name, s_id, age);
	Baek B(name, s_name, s_id, age);

	switch (num)
	{
	case 1:
	{
		K.lunch();
		break;
	}
	case 2:
	{
		B.lunch();
		break;
	}
	case 3:
	{
		S.input(name, s_name, s_id, age);
		S.lunch();
		break;
	}
	default:
		cout << "�߸� �Է��ϼ̽��ϴ�. \n";
		break;
	}

	return 0;
}
*/