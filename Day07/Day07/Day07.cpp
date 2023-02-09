/*
#include<iostream>
#include<string>

using namespace std;

class Person
{
protected:	// 하위 상속자가 접근 가능
	string name;
private:	// 하위 상속자 접근 불가
	string gender;
public:	// 하위 상속자, 메인 함수 접근 가능
	int age;
	
	void talk()
	{
		cout << "말하기\n";
	}
	void eat()
	{
		cout << "먹기\n";
	}
	void sleep()
	{
		cout << "잠하기\n";
	}
};

class Student : public Person	// Person 클래스를 상속받은 Student 클래스
{
	string stu_id;
public:
	void study()
	{
		cout << "공부하기\n";
	}
	void test()
	{
		name = "학생1";
		age = 20;	// Person의 age 20으로 초기화
		//gender = "여자"; 
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

	// Person과 Person을 상속 받은 클래스 내에서만 접근이 가능함.
	//s.name = "홍길동";	// Person 내에서 protected 접근제어자로 지정.
	s.set_name("성춘향");
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
protected:	// 하위 상속자가 접근 가능
	string name;
	string gender;
	int age;
public:	
	Person()
	{
		cout << "Person 생성자 실행됨. \n";
	}
	Person(string name)
	{
		cout << "Person 생성자2 실행됨. \n";
		this->name = name;
	}
	void talk()
	{
		cout << "말하기\n";
	}
	void eat()
	{
		cout << "먹기\n";
	}
	void sleep()
	{
		cout << "잠하기\n";
	}
};

//class Student : public Person		// 상속 받을 때 그대로 상속
//class Student : protected Person	// 상속 받을 때 public -> protected로 상속
//class Student : private Person	// 상속 받을 때 private로 상속
//class Student : Person			// 상속 받을 때 private로 상속

class Student : public Person	// Person 클래스를 상속받은 Student 클래스
{
	string stu_id;
public:
	// 생성자가 여러개일 때 구별할 수 있도록 달라야한다.
	Student() : Person("aaa")
	{
		// 상위 클래스의 생성자 우선 실행 후 하위 클래스 생성자 실행
		cout << "Student 생성자 실행됨. \n";
	}
	Student(string stu_id)
	{
		cout << "Student 생성자2 실행됨. \n";
		this->stu_id = stu_id;
	}
	void study()
	{
		cout << "공부하기\n";
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

class Student : public Person { // 기본값 private
	string stu_id;
public:
	Student() : Person("aaaa") {
		cout << "Student 생성자 실행됨.\n";
		this->name = "홍길동";
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
	Student s2; // Person의 name은 홍길동
	cout << s2.get_name();
	Student s4("성춘향"); // Person의 name은 ccccc
	cout << s4.get_name();
	Student s3(1); // Person의 name은 bbbb
	cout << s3.get_name();
	Student s("홍길동", "1111111"); // Person의 name은 홍길동
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

class Student : public Person { // 기본값 private
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
// 오버라이딩
// 매개변수의 개수, 타입, 함수의 이름 모두 완전히 같은 메소드를 덮어쓰는 것.

// 오버로딩
// 함수의 이름만 같고, 원형이 같지 않은 것.

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
		cout << "나는 사람이야 \n";
	}
	void show(int a) {
		cout << "나는 사람이야 2 \n";
	}
};

class Student : public Person { // 기본값 private
	string stu_id;
public:
	Student() : Person() {}

	using Person::show;
	void show() {
		cout << "나는 학생이야 \n";
	}
};


int main() {
	Student s2;
	s2.show();
	s2.show(1);
	// 오류가 난다
	// 둘 중에 하나가 실행될 것 같다.

	return 0;
}
