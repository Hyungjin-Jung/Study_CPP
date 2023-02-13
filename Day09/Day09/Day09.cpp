/*
#include<iostream>

using namespace std;

class Person
{
protected:
	string name;
public:
	virtual ~Person()	// virtual�� ����ϸ� �ڽ� Ŭ������ �Ҹ��ڰ� ȣ��ȴٰ� �����ϸ� ����.
	{
		cout << "����� �Ҹ����Դϴ�. " << endl;
	}
	virtual void info()
	{// ���� ���� �Լ��� �ƴϱ� ������ �߻� Ŭ������ �ƴϴ�.
		cout << "����Դϴ�. " << endl;
	}

};

class Student : public Person
{
	string stu_id;
public:
	~Student()
	{
		cout << "�л��� �Ҹ����Դϴ�. " << endl;
	}
	void info()
	{
		cout << "�л��Դϴ�. " << endl;
	}
	void test()
	{
		cout << "�л��� test �Լ� " << endl;
	}
};

class Instructor : public Person
{
public:
	~Instructor()
	{
		cout << "������ �Ҹ����Դϴ�. " << endl;
	}
	void info()
	{
		cout << "�����Դϴ�. " << endl;
	}
};

int main()
{
	// ��ĳ����
	//Person s = Student();	// ���, �л� �Ҹ��� ����. + ��� ������ ���� (��� �Ҹ��� ���� ����)
	//s.info();	// ���� ���ε�. (����Դϴ�. ���)

	//Person* ss = new Student();
	//ss->info();	// (*ss).info�� ����. ���� ���ε�. (�л��Դϴ�. ���)
	////ss->test();	// ����. �θ� Ŭ������ ���� ����� ������ �� ����
	//delete ss;	// �ڽ� Ŭ���� �Ҹ��� ����. (�θ� Ŭ���� �Ҹ��ڿ� virtual ���� ��)

	//Student stu;	// ���� �޸�
	//Person* sss = &stu;
	//sss->info();	
	////delete sss; // ���� �߿� �޸𸮰� �Ҵ�ǹǷ� delete�� ����Ͽ� ������ �� �ʿ䰡 ����. (���� �� ���� �߻�, ��Ÿ�� ����)

	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	// per_arr�� ���� �޸𸮰� �ƴ�
	for (int i = 0; i < 3; i++)
	{
		per_arr[i]->info();
	}

	for (int i = 0; i < 3; i++)
	{
		delete per_arr[i];
	}

	//int* po = new int[3];
	//delete[] po;
	
	//Person persons[2] = { Student(), Student() };

	return 0;
}
*/
/*
#include<iostream>

using namespace std;

class Person
{
protected:
	string name;
public:
	Person()
	{
		this->name = "�ƹ���";
	}
	virtual ~Person()	// virtual�� ����ϸ� �ڽ� Ŭ������ �Ҹ��ڰ� ȣ��ȴٰ� �����ϸ� ����.
	{
		cout << "����� �Ҹ����Դϴ�. " << endl;
	}
	virtual void info()
	{
		cout << "����Դϴ�. " << endl;
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

class Student : public Person
{
	string stu_id;
public:
	~Student()
	{
		cout << "�л��� �Ҹ����Դϴ�. " << endl;
	}
	void info()
	{
		cout << "�л��Դϴ�. " << endl;
	}
	void test()
	{
		cout << "�л��� test �Լ� " << endl;
	}
};

class Instructor : public Person
{
public:
	~Instructor()
	{
		cout << "������ �Ҹ����Դϴ�. " << endl;
	}
	void info()
	{
		cout << "�����Դϴ�. " << endl;
	}
};

int main()
{
	// �ٿ�ĳ����

	//Person p1 = new Student();
	Person* p = new Student();
	//p->test();
	cout << p->get_name() << endl;

	//Student* s1 = (Student*)p1;	// �Ұ���
	Student* s = (Student*)p;	// �ٿ�ĳ����
	s->test();
	p->set_name("ȫ�浿");
	cout << p->get_name() << " " << s->get_name() << endl;
	s->set_name("������");
	cout << p->get_name() << " " << s->get_name() << endl;
	// �ʹ� ������ ��������� ����

	Student& s1 = *(Student*)p;	// �Ȱ��� �ٿ�ĳ����
	s1.set_name("�ڵ�");
	cout << p->get_name() << " " << s1.get_name() << endl;

	Student s2 = *(Student*)p;	// ���� ��ƾ� ��, �ٸ� �޸𸮸� ���� s2�� p�� �ٸ� �޸�, �ٿ� ĳ������ ����.
	s2.set_name("�ھ�");
	cout << p->get_name() << " " << s2.get_name() << endl;

	delete p;

	// ������ ����, ���� ���� ����
	int a = 1;
	int k = 2;
	int& b = a;	 // b�� a�� �ּҰ��� ����
	int* c = &a; // 

	cout << a << " " << b << " " << *c << endl;

	b = k;	// b�� k�� �ּҸ� �����ϴ� ���� �ƴ�, a�� 2�� �ٲ� (�� a�� �ּҸ��� ����)

	cout << a << " " << b << " " << *c << endl;
	
	a = 3;

	cout << a << " " << b << " " << *c << endl;

	c = &k;
	k = 4;

	cout << a << " " << b << " " << *c << endl;


	return 0;
}
*/

#include<iostream>
#include<vector>

using namespace std;

class Person
{
protected:
	string name;
	static int static_var;	// ��ü ���� ������ ���� �Ҵ���� �ʰ�, ��� ��ü�� ���� ������ ����.
	static int count;
public:
	static void static_method()
	{
		//name = "�ƹ���";	// ����. ������ �Ұ�
		//set_name{"�ƹ���"};	// ����. static �޼ҵ� �ȿ����� �Ϲ� ����� ���� �� ���� ����.
		cout << "����ƽ �޼ҵ� �׽�Ʈ " << endl;
	}
	static int get_var()
	{
		return static_var;
	}
	static int get_count()
	{
		return count;
	}
	Person()
	{
		this->name = "�ƹ���";
		count++;
	}
	virtual ~Person()	// virtual�� ����ϸ� �ڽ� Ŭ������ �Ҹ��ڰ� ȣ��ȴٰ� �����ϸ� ����.
	{
		cout << "����� �Ҹ����Դϴ�. " << endl;
		count--;
	}
	virtual void info()
	{
		cout << "����Դϴ�. " << endl;
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

int Person::static_var = -1;	// ������ ����
int Person::count = 0;	// ������ ����

class Student : public Person
{
	string stu_id;
public:
	~Student()
	{
		cout << "�л��� �Ҹ����Դϴ�. " << endl;
	}
	void info()
	{
		cout << "�л��Դϴ�. " << endl;
	}
	void test()
	{
		cout << "�л��� test �Լ� " << endl;
	}
};

class Instructor : public Person
{
public:
	~Instructor()
	{
		cout << "������ �Ҹ����Դϴ�. " << endl;
	}
	void info()
	{
		cout << "�����Դϴ�. " << endl;
	}
};

int main()
{
	// static(����) ���
	// Ŭ������ ���� �ʵ�, �޼ҵ� ���� ���.
	// static ����� ��� ��ü�� �ϳ��� ������ �����Ѵ�. 
	// name static ��� X -> ��ü ���� ������ ���� �Ҵ��.
	// static_var static ��� O -> ��ü ���� ������ ���� �Ҵ���� �ʰ�, ��� ��ü�� ���� ������ ����.
	//Person::info();	// static�� �ƴϱ� ������ �Ұ���
	Person::static_method();
	cout << Person::get_var() << endl;
	cout << Person::get_count() << endl;
	int i = 0;

	Person p;	// Person ��ü ����	// count + 1
	p.info();
	p.static_method();
	cout << p.get_count() << endl;

	Person p1;	// count + 1
	p1.set_name("ȫ�浿");
	cout << p1.get_name() << endl;
	cout << p.get_name() << endl;

	Person p2;	// count + 1

	cout << p.get_count() << " " << Person::get_count() << " " << p1.get_count() << endl;
	
	cout << Person::get_count() << "��" << endl;

	Person* p3[5];	// count + 5
	for (int i = 0; i < 5; i++)
	{
		p3[i] = new Person();
	}

	cout << Person::get_count() << "��" << endl;
	
	for (int i = 0; i < 5; i++)	// count - 5
	{
		delete p3[i];
	}

	cout << Person::get_count() << "��" << endl;

	vector<Person*> persons = { new Person(), new Person() };	// count + 2

	cout << Person::get_count() << "��" << endl;

	persons.push_back(new Person());	// count + 1

	cout << Person::get_count() << "��" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++)	// count - 3
	{
		delete persons.at(i);
		//delete persons[i];	// �� ����.
	}

	for (int i = 0; i < size; i++)
	{
		persons.pop_back();
	}

	cout << Person::get_count() << "��" << endl;

	return 0;
}