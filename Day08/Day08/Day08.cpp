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
		cout << "Person의 테스트 함수입니다. " << position << endl;
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
		cout << "Student의 테스트 함수입니다. \n";
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

	Person p2 = Student("홍길동");	// Student 생성자 실행
	p2.test();	
	//p2.aaa();	// Student 메소드 접근 불가

	Person* p3 = new Student("성춘향");	// P3는 Student 클래스 객체의 주소, 동적메모리 할당
	p3->test();

	Person p4[4] = {Instuctor("강사"), Student("학생 1"), Student("학생 2"),  Student("학생 3") };
	// Person 클래스를 상속받은 클래스만 가능
	for (int i = 0; i < 4; i++)
	{
		cout << p4[i].get_position() << endl;
	}

	return 0;
}
*/
/*
// 추상 메소드
#include<iostream>

using namespace std;

class Elec	// 추상 클랙스, 추상 메소드가 하나라도 있으면 추상 클래스가 된다.
{
protected:

public:
	virtual void on() = 0;	// 추상 메소드 (순수 가상 함수)
	virtual void off() = 0; // virtual void off()	// 가상 함수
	void test()
	{
		cout << "test \n";
	}
};

class TV : public Elec	// 부모에서 상속 받은 순수 가상 함수를 구현하지 않을 경우, 자식 클래스 또한 추상 클래스가 된다. 
{

public:
	void on()
	{
		cout << "TV 켜기 " << endl;
	}
	void off()
	{
		cout << "TV 끄기 " << endl;
	}
};

class Radio : public Elec
{

public:
	void on()
	{
		cout << "Radio 켜기 " << endl;
	}
	void off()
	{
		cout << "Radio 끄기 " << endl;
	}
};

int main()
{
	//Elec elec;	// 오류, 추상 클래스로든 객체(인스턴스)를 생성할 수 없음.
	
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

// 필드(변수), 메소드(함수), 생성자(메소드의 일종), 소멸자(메소드의 일종)
class Person
{
protected:
	int age;
	string name;
	int* p = new int[3];
public:
	Person() // 생성자
	{
		cout << "Person 생성자 실행" << endl;
	}
	Person(string name) // 생성자
	{
		cout << "Person 생성자2 실행 " << name <<endl;
	}
	void test() // 메소드
	{
		cout << "Person test 실행" << endl;
	}
	~Person() // 소멸자
	{
		delete[] p;
		cout << "Person 소멸자 실행" << endl;
	}
};

class Student : public Person
{
public:
	Student() // 생성자
	{
		cout << "Student 생성자 실행" << endl;
	}
	void test2() // 메소드
	{
		cout << "Student test2 실행" << endl;
	}
	~Student() // 소멸자
	{
		cout << "Student 소멸자 실행" << endl;
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

// 자습
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
		//cout << "Person 생성자 실행" << i <<endl;
	}
	string get_position()
	{
		return position;
	}
	~Person()
	{

		cout << "Person 소멸자 실행 " << i <<endl;
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
		cout << "Student 생성자 실행 " << endl;
		this->position = position;
	}
	~Student()
	{
		cout << "Student 소멸자 실행 " << endl;
	}
};

int main()
{
	Person p2 = Student("홍길동");	// Student 생성자 실행

	Person* p3 = new Student("성춘향");	// P3는 Student 클래스 객체의 주소, 동적메모리 할당

	Person p4[4] = {Student("학생 1"), Student("학생 2"), Student("학생 3")};

	for (int k = 0; k < 3; k++)
	{
		cout << p4[k].get_position() << endl;
	}

	return 0;
}
