//-------------����ü(struct)--------------
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Position
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	Position p;
//	Position p1;	// �� ����ü�� �ٸ���. ���� p.x �� p1.x�� �ٸ���. 
//	p.x = 3;
//	p.y = 4;
//	// Position p = { 3, 4 }; // ���� ����.
//
//	cout << p.x << endl;
//	cout << p.y << endl;
//
//	return 0;
//}
 
//----------------Ŭ����-----------------
#include<iostream>
#include<string>

using namespace std;

class Animal
{
	string jong;
};

class Dog
{

};

class Cat	// �⺻������ ��������
{

		string name;
		string jong;
		int age = 0;

	public:		// ���� ����
		Cat()	// ������, class�� ��ü(����)�� ���� �� �ٷ� ���� 
		{
			name = "�����";
			jong = "��";
			age = 1;
			cout << age << "\nCat �ν��Ͻ� ���� \n";
		}

		Cat(string name, string jong)	// ������, class�� ��ü(����)�� ���� �� �ٷ� ���� 
		{
			this -> jong = jong;
			this -> name = name;
			//(*this).name = name; // this => ��ü �ڽ�
		}

	//private:	// ����
		void mew()	// �޼ҵ� = Ŭ���� �ȿ��� ������ �Լ�
		{
			cout << "�߿�~ \n";
		}
		void eat()
		{
			cout << "������ �Դ´�. \n";
		}

		string get_name()
		{
			return name;
		}
		string get_jong()
		{
			return jong;
		}
		int get_age()
		{
			return age;
		}
		void set_name(string name)	//setName
		{
			this->name = name;
		}
		void set_jong(string jong)	//setJong
		{
			this->name = name;
		}
		void set_age(int age)	//setAge
		{
			this->age = age;
		}
};

struct Pos	// Ŭ�������� ���̴� ����ü�� �⺻������ Public: ���� (�������� X)
{// C������ ����ü ���� �Լ� ���� �Ұ���, C++�� ����
	int x;
	int y;
};

int main()
{
	Pos p = { 2, 6 };
	Cat c("����", "�丣�þ�");	// c�� ��ü, Cat�̶�� Ŭ������ �ν��Ͻ� -> c, �� ������ Cat�� ������ �����
	//Cat c = Cat("����", "�丣�þ�");	// ���� ����
	
	string name = c.get_name();
	string jong = c.get_jong();
	int age = c.get_age();

	//age = 5;
	c.set_age(5);	// ���� ����
	age = c.get_age();
	c.set_name("�ٵ���");

	Cat c2;

	c.mew();
	cout << age << endl << c2.get_age() << endl;
	cout << c.get_name() << " " << jong << endl;	// name == c.get_name()

	return 0;
}