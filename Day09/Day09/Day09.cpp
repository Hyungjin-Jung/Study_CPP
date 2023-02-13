/*
#include<iostream>

using namespace std;

class Person
{
protected:
	string name;
public:
	virtual ~Person()	// virtual을 사용하면 자식 클래스의 소멸자가 호출된다고 생각하면 편함.
	{
		cout << "사람의 소멸자입니다. " << endl;
	}
	virtual void info()
	{// 순수 가상 함수는 아니기 때문에 추상 클래스는 아니다.
		cout << "사람입니다. " << endl;
	}

};

class Student : public Person
{
	string stu_id;
public:
	~Student()
	{
		cout << "학생의 소멸자입니다. " << endl;
	}
	void info()
	{
		cout << "학생입니다. " << endl;
	}
	void test()
	{
		cout << "학생의 test 함수 " << endl;
	}
};

class Instructor : public Person
{
public:
	~Instructor()
	{
		cout << "강사의 소멸자입니다. " << endl;
	}
	void info()
	{
		cout << "강사입니다. " << endl;
	}
};

int main()
{
	// 업캐스팅
	//Person s = Student();	// 사람, 학생 소멸자 실행. + 사람 생성자 실행 (사람 소멸자 생성 예정)
	//s.info();	// 정적 바인딩. (사람입니다. 출력)

	//Person* ss = new Student();
	//ss->info();	// (*ss).info와 같음. 동적 바인딩. (학생입니다. 출력)
	////ss->test();	// 오류. 부모 클래스에 없는 멤버는 접근할 수 없음
	//delete ss;	// 자식 클래스 소멸자 실행. (부모 클래스 소멸자에 virtual 있을 시)

	//Student stu;	// 정적 메모리
	//Person* sss = &stu;
	//sss->info();	
	////delete sss; // 빌드 중에 메모리가 할당되므로 delete를 사용하여 해제를 할 필요가 없다. (실행 중 오류 발생, 런타임 에러)

	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	// per_arr는 동적 메모리가 아님
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
		this->name = "아무개";
	}
	virtual ~Person()	// virtual을 사용하면 자식 클래스의 소멸자가 호출된다고 생각하면 편함.
	{
		cout << "사람의 소멸자입니다. " << endl;
	}
	virtual void info()
	{
		cout << "사람입니다. " << endl;
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
		cout << "학생의 소멸자입니다. " << endl;
	}
	void info()
	{
		cout << "학생입니다. " << endl;
	}
	void test()
	{
		cout << "학생의 test 함수 " << endl;
	}
};

class Instructor : public Person
{
public:
	~Instructor()
	{
		cout << "강사의 소멸자입니다. " << endl;
	}
	void info()
	{
		cout << "강사입니다. " << endl;
	}
};

int main()
{
	// 다운캐스팅

	//Person p1 = new Student();
	Person* p = new Student();
	//p->test();
	cout << p->get_name() << endl;

	//Student* s1 = (Student*)p1;	// 불가능
	Student* s = (Student*)p;	// 다운캐스팅
	s->test();
	p->set_name("홍길동");
	cout << p->get_name() << " " << s->get_name() << endl;
	s->set_name("성춘향");
	cout << p->get_name() << " " << s->get_name() << endl;
	// 너무 어려우면 여기까지만 알자

	Student& s1 = *(Student*)p;	// 똑같은 다운캐스팅
	s1.set_name("코디");
	cout << p->get_name() << " " << s1.get_name() << endl;

	Student s2 = *(Student*)p;	// 값을 담아야 함, 다른 메모리를 만듬 s2랑 p는 다른 메모리, 다운 캐스팅은 맞음.
	s2.set_name("코양");
	cout << p->get_name() << " " << s2.get_name() << endl;

	delete p;

	// 포인터 변수, 참조 변수 예시
	int a = 1;
	int k = 2;
	int& b = a;	 // b가 a의 주소값을 참조
	int* c = &a; // 

	cout << a << " " << b << " " << *c << endl;

	b = k;	// b는 k의 주소를 참조하는 것이 아닌, a를 2로 바꿈 (즉 a의 주소만을 참조)

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
	static int static_var;	// 객체 별로 공간이 따로 할당되지 않고, 모든 객체가 같은 공간을 공유.
	static int count;
public:
	static void static_method()
	{
		//name = "아무개";	// 오류. 접근이 불가
		//set_name{"아무개"};	// 오류. static 메소드 안에서는 일반 멤버에 접근 할 수가 없음.
		cout << "스태틱 메소드 테스트 " << endl;
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
		this->name = "아무개";
		count++;
	}
	virtual ~Person()	// virtual을 사용하면 자식 클래스의 소멸자가 호출된다고 생각하면 편함.
	{
		cout << "사람의 소멸자입니다. " << endl;
		count--;
	}
	virtual void info()
	{
		cout << "사람입니다. " << endl;
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

int Person::static_var = -1;	// 데이터 영역
int Person::count = 0;	// 데이터 영역

class Student : public Person
{
	string stu_id;
public:
	~Student()
	{
		cout << "학생의 소멸자입니다. " << endl;
	}
	void info()
	{
		cout << "학생입니다. " << endl;
	}
	void test()
	{
		cout << "학생의 test 함수 " << endl;
	}
};

class Instructor : public Person
{
public:
	~Instructor()
	{
		cout << "강사의 소멸자입니다. " << endl;
	}
	void info()
	{
		cout << "강사입니다. " << endl;
	}
};

int main()
{
	// static(정적) 멤버
	// 클래스에 속한 필드, 메소드 등의 멤버.
	// static 멤버는 모든 객체가 하나의 공간을 공유한다. 
	// name static 멤버 X -> 객체 별로 공간이 따로 할당됨.
	// static_var static 멤버 O -> 객체 별로 공간이 따로 할당되지 않고, 모든 객체가 같은 공간을 공유.
	//Person::info();	// static이 아니기 때문에 불가능
	Person::static_method();
	cout << Person::get_var() << endl;
	cout << Person::get_count() << endl;
	int i = 0;

	Person p;	// Person 객체 생성	// count + 1
	p.info();
	p.static_method();
	cout << p.get_count() << endl;

	Person p1;	// count + 1
	p1.set_name("홍길동");
	cout << p1.get_name() << endl;
	cout << p.get_name() << endl;

	Person p2;	// count + 1

	cout << p.get_count() << " " << Person::get_count() << " " << p1.get_count() << endl;
	
	cout << Person::get_count() << "명" << endl;

	Person* p3[5];	// count + 5
	for (int i = 0; i < 5; i++)
	{
		p3[i] = new Person();
	}

	cout << Person::get_count() << "명" << endl;
	
	for (int i = 0; i < 5; i++)	// count - 5
	{
		delete p3[i];
	}

	cout << Person::get_count() << "명" << endl;

	vector<Person*> persons = { new Person(), new Person() };	// count + 2

	cout << Person::get_count() << "명" << endl;

	persons.push_back(new Person());	// count + 1

	cout << Person::get_count() << "명" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++)	// count - 3
	{
		delete persons.at(i);
		//delete persons[i];	// 와 같다.
	}

	for (int i = 0; i < size; i++)
	{
		persons.pop_back();
	}

	cout << Person::get_count() << "명" << endl;

	return 0;
}