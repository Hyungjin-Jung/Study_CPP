/*
#include<iostream>
#include<string>

using namespace std;

class Person
{
protected:	// ���� ����ڰ� ���� ����
	string name;
private:	// ���� ����� ���� �Ұ�
	string gender;
public:	// ���� �����, ���� �Լ� ���� ����
	int age;
	
	void talk()
	{
		cout << "���ϱ�\n";
	}
	void eat()
	{
		cout << "�Ա�\n";
	}
	void sleep()
	{
		cout << "���ϱ�\n";
	}
};

class Student : public Person	// Person Ŭ������ ��ӹ��� Student Ŭ����
{
	string stu_id;
public:
	void study()
	{
		cout << "�����ϱ�\n";
	}
	void test()
	{
		name = "�л�1";
		age = 20;	// Person�� age 20���� �ʱ�ȭ
		//gender = "����"; 
	}
	void set_name(string name) 
	{
		this->name = name;
	}
	string get_name() 
	{
		return name;
	}
};

int main()
{
	Student s;
	Person p;

	// Person�� Person�� ��� ���� Ŭ���� �������� ������ ������.
	//s.name = "ȫ�浿";	// Person ������ protected ���������ڷ� ����.
	s.set_name("������");
	s.age = 21;
	cout << s.get_name();

	return 0;
}
*/
/*
#include<iostream>
#include<string>

using namespace std;

class Person
{
protected:	// ���� ����ڰ� ���� ����
	string name;
	string gender;
	int age;
public:	
	Person()
	{
		cout << "Person ������ �����. \n";
	}
	Person(string name)
	{
		cout << "Person ������2 �����. \n";
		this->name = name;
	}
	void talk()
	{
		cout << "���ϱ�\n";
	}
	void eat()
	{
		cout << "�Ա�\n";
	}
	void sleep()
	{
		cout << "���ϱ�\n";
	}
};

//class Student : public Person		// ��� ���� �� �״�� ���
//class Student : protected Person	// ��� ���� �� public -> protected�� ���
//class Student : private Person	// ��� ���� �� private�� ���
//class Student : Person			// ��� ���� �� private�� ���

class Student : public Person	// Person Ŭ������ ��ӹ��� Student Ŭ����
{
	string stu_id;
public:
	// �����ڰ� �������� �� ������ �� �ֵ��� �޶���Ѵ�.
	Student() : Person("aaa")
	{
		// ���� Ŭ������ ������ �켱 ���� �� ���� Ŭ���� ������ ����
		cout << "Student ������ �����. \n";
	}
	Student(string stu_id)
	{
		cout << "Student ������2 �����. \n";
		this->stu_id = stu_id;
	}
	void study()
	{
		cout << "�����ϱ�\n";
	}
};

int main()
{
	Student s;
	Student s2("1234");

	return 0;
}
*/
/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person(string name) {
		this->name = name;
	}
};

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person("aaaa") {
		cout << "Student ������ �����.\n";
		this->name = "ȫ�浿";
	}
	Student(string name, string stu_id) : Person(name) {
		this->stu_id = stu_id;
	}
	Student(string name) : Person("ccccc") {  }
	Student(int a) : Person("bbbb") {  }
	string get_name()
	{
		return name;
	}
};


int main() {
	Student s2; // Person�� name�� ȫ�浿
	cout << s2.get_name();
	Student s4("������"); // Person�� name�� ccccc
	cout << s4.get_name();
	Student s3(1); // Person�� name�� bbbb
	cout << s3.get_name();
	Student s("ȫ�浿", "1111111"); // Person�� name�� ȫ�浿
	cout << s.get_name();

	return 0;
}
*/

/*
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person {
protected:
	string name;
public:
	Person() {}

	void print()
	{
		cout << "Person print\n";
	}
};

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person() {}

	void print()
	{
		cout << "Studebt print\n";
	}
};

int main() {
	Student s2; 
	s2.print();

	return 0;
}
*/
// �������̵�
// �Ű������� ����, Ÿ��, �Լ��� �̸� ��� ������ ���� �޼ҵ带 ����� ��.

// �����ε�
// �Լ��� �̸��� ����, ������ ���� ���� ��.

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person() {}
	string get_name() {
		return name;
	}
	void show() {
		cout << "���� ����̾� \n";
	}
	void show(int a) {
		cout << "���� ����̾� 2 \n";
	}
};

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person() {}

	using Person::show;
	void show() {
		cout << "���� �л��̾� \n";
	}
};


int main() {
	Student s2;
	s2.show();
	s2.show(1);
	// ������ ����
	// �� �߿� �ϳ��� ����� �� ����.

	return 0;
}
