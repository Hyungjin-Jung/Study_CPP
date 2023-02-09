
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
		cout << "변의 개수 : " << num << "\n밑변의 길이 : " << length1 << endl;
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
		cout << "사각형의 넓이 : " << length1 * height1 << endl;
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
		cout << "삼각형의 넓이 : " << length1 * height2 / 2 << endl;
	}
};

int main() 
{
	double length = 0, height = 0;
	int num = 1;

	cout << "변의 개수를 입력해주세요. : ";
	cin >> num;
	cout << "밑변의 길이를 입력해주세요. : ";
	cin >> length;
	cout << "높이의 길이를 입력해주세요. : ";
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
		cout << "변의 개수를 잘못 입력하셨습니다. \n";
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
		cout << "\n점심은 학식 \n";
		cout << "이름: " << name << endl;
		cout << "대학교: " << s_name << endl;
		cout << "학번: " << s_id << endl;
		cout << "나이: " << age << endl;
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
		cout << "\n점심은 김가네 김밥 \n";
		cout << "이름: " << name << endl;
		cout << "대학교: " << s_name << endl;
		cout << "학번: " << s_id << endl;
		cout << "나이: " << age << endl;
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
		cout << "\n점심은 백종원 피자 \n";
		cout << "이름: " << name << endl;
		cout << "대학교: " << s_name << endl;
		cout << "학번: " << s_id << endl;
		cout << "나이: " << age << endl;
	}
};

int main() 
{
	string name, s_name, s_id;
	int age;
	int num;

	cout << "1. 김가네,  2. 뺵's 피자,  3. 학식 : ";
	cin >> num;
	cout << "이름: ";
	cin >> name;
	cout << "대학교: ";
	cin >> s_name;
	cout << "학번: ";
	cin >> s_id;
	cout << "나이: ";
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
		cout << "잘못 입력하셨습니다. \n";
		break;
	}

	return 0;
}
*/