/*
#include<iostream>

using namespace std;

class Person
{
protected:
	string name;
	string position;
public:
	void test()
	{
		cout << "Person�� �׽�Ʈ �Լ��Դϴ�. " << position << endl;
	}
	string get_position()
	{
		return position;
	}
};

class Student : public Person
{
	string stu_id;
public:
	Student(string position)
	{
		this->position = position;
	}
	void aaa()
	{

	}
	void test()
	{
		cout << "Student�� �׽�Ʈ �Լ��Դϴ�. \n";
	}
};

class Instuctor : public Person
{
public:
	Instuctor(string position)
	{
		this->position = position;
	}
};

int main()
{
	//Person p;
	Person p = Person();
	p.test();

	Person p2 = Student("ȫ�浿");	// Student ������ ����
	p2.test();	
	//p2.aaa();	// Student �޼ҵ� ���� �Ұ�

	Person* p3 = new Student("������");	// P3�� Student Ŭ���� ��ü�� �ּ�, �����޸� �Ҵ�
	p3->test();

	Person p4[4] = {Instuctor("����"), Student("�л� 1"), Student("�л� 2"),  Student("�л� 3") };
	// Person Ŭ������ ��ӹ��� Ŭ������ ����
	for (int i = 0; i < 4; i++)
	{
		cout << p4[i].get_position() << endl;
	}

	return 0;
}
*/
/*
// �߻� �޼ҵ�
#include<iostream>

using namespace std;

class Elec	// �߻� Ŭ����, �߻� �޼ҵ尡 �ϳ��� ������ �߻� Ŭ������ �ȴ�.
{
protected:

public:
	virtual void on() = 0;	// �߻� �޼ҵ� (���� ���� �Լ�)
	virtual void off() = 0; // virtual void off()	// ���� �Լ�
	void test()
	{
		cout << "test \n";
	}
};

class TV : public Elec	// �θ𿡼� ��� ���� ���� ���� �Լ��� �������� ���� ���, �ڽ� Ŭ���� ���� �߻� Ŭ������ �ȴ�. 
{

public:
	void on()
	{
		cout << "TV �ѱ� " << endl;
	}
	void off()
	{
		cout << "TV ���� " << endl;
	}
};

class Radio : public Elec
{

public:
	void on()
	{
		cout << "Radio �ѱ� " << endl;
	}
	void off()
	{
		cout << "Radio ���� " << endl;
	}
};

int main()
{
	//Elec elec;	// ����, �߻� Ŭ�����ε� ��ü(�ν��Ͻ�)�� ������ �� ����.
	
	TV tv;
	tv.test();
	tv.on();

	Radio ra;
	ra.on();

	return 0;
}
*/
/*
#include<iostream>

using namespace std;

// �ʵ�(����), �޼ҵ�(�Լ�), ������(�޼ҵ��� ����), �Ҹ���(�޼ҵ��� ����)
class Person
{
protected:
	int age;
	string name;
	int* p = new int[3];
public:
	Person() // ������
	{
		cout << "Person ������ ����" << endl;
	}
	Person(string name) // ������
	{
		cout << "Person ������2 ���� " << name <<endl;
	}
	void test() // �޼ҵ�
	{
		cout << "Person test ����" << endl;
	}
	~Person() // �Ҹ���
	{
		delete[] p;
		cout << "Person �Ҹ��� ����" << endl;
	}
};

class Student : public Person
{
public:
	Student() // ������
	{
		cout << "Student ������ ����" << endl;
	}
	void test2() // �޼ҵ�
	{
		cout << "Student test2 ����" << endl;
	}
	~Student() // �Ҹ���
	{
		cout << "Student �Ҹ��� ����" << endl;
	}
};

int main()
{
	Person p;
	p.test();
	//p.~Person();
	Person p2("aaa");

	Person* p1 = new Person();
	delete p1;

	Student s;

	return 0;
}
*/

// �ڽ�
#include<iostream>

using namespace std;

class Person
{
protected:
	string name;
	string position;
	static int i;

public:
	Person()
	{
		//cout << "Person ������ ����" << i <<endl;
	}
	string get_position()
	{
		return position;
	}
	~Person()
	{

		cout << "Person �Ҹ��� ���� " << i <<endl;
		i++;
	}
};

int Person::i = 0;

class Student : public Person
{
	string stu_id;
	//int j = 1;

public:
	Student(string position)
	{
		cout << "Student ������ ���� " << endl;
		this->position = position;
	}
	~Student()
	{
		cout << "Student �Ҹ��� ���� " << endl;
	}
};

int main()
{
	Person p2 = Student("ȫ�浿");	// Student ������ ����

	Person* p3 = new Student("������");	// P3�� Student Ŭ���� ��ü�� �ּ�, �����޸� �Ҵ�

	Person p4[4] = {Student("�л� 1"), Student("�л� 2"), Student("�л� 3")};

	for (int k = 0; k < 3; k++)
	{
		cout << p4[k].get_position() << endl;
	}

	return 0;
}
