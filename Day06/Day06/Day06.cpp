//-------------구조체(struct)--------------
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
//	Position p1;	// 두 구조체는 다르다. 따라서 p.x 와 p1.x는 다르다. 
//	p.x = 3;
//	p.y = 4;
//	// Position p = { 3, 4 }; // 위와 같다.
//
//	cout << p.x << endl;
//	cout << p.y << endl;
//
//	return 0;
//}
 
//----------------클래스-----------------
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

class Cat	// 기본적으로 정보은닉
{

		string name;
		string jong;
		int age = 0;

	public:		// 은닉 해제
		Cat()	// 생성자, class로 객체(변수)를 만들 때 바로 실행 
		{
			name = "고양이";
			jong = "모름";
			age = 1;
			cout << age << "\nCat 인스턴스 생성 \n";
		}

		Cat(string name, string jong)	// 생성자, class로 객체(변수)를 만들 때 바로 실행 
		{
			this -> jong = jong;
			this -> name = name;
			//(*this).name = name; // this => 객체 자신
		}

	//private:	// 은닉
		void mew()	// 메소드 = 클래스 안에서 생성된 함수
		{
			cout << "야옹~ \n";
		}
		void eat()
		{
			cout << "생선을 먹는다. \n";
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

struct Pos	// 클래스와의 차이는 구조체는 기본적으로 Public: 적용 (정보은닉 X)
{// C언어에서는 구조체 내에 함수 선언 불가능, C++은 가능
	int x;
	int y;
};

int main()
{
	Pos p = { 2, 6 };
	Cat c("나비", "페르시안");	// c는 객체, Cat이라는 클래스의 인스턴스 -> c, 이 순간에 Cat의 생성자 실행됨
	//Cat c = Cat("나비", "페르시안");	// 위와 같음
	
	string name = c.get_name();
	string jong = c.get_jong();
	int age = c.get_age();

	//age = 5;
	c.set_age(5);	// 위와 같음
	age = c.get_age();
	c.set_name("바둑이");

	Cat c2;

	c.mew();
	cout << age << endl << c2.get_age() << endl;
	cout << c.get_name() << " " << jong << endl;	// name == c.get_name()

	return 0;
}