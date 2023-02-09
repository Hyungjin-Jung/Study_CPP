////-------------구조체(struct) 실습--------------
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Rectangle
//{
//	double width;
//	double height;
//};
//
//int main()
//{
//	Rectangle R;
//
//	cout << "가로, 세로 길이를 입력하세요. : ";
//
//	cin >> R.width;
//	cin >> R.height;
//
//	cout << "넓이는 : " << R.width * R.height;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Rectangle
//{
//	double width, height;
//
//	public:
//		Rectangle(double width, double height) 
//		{
//			this->width = width;
//			this->height = height;
//		}
//		double area(double width, double height)
//		{
//			return width * height;
//		}
//};
//
//int main()
//{
//	double width = 0, height = 0;
//
//	Rectangle R(width, height);
//
//	cout << "가로, 세로 길이를 입력하세요. : ";
//
//	cin >> width >> height;
//
//	cout << "넓이는 : " << R.area(width, height);
//
//	return 0;
//}

// 번외 실습 내 풀이
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class character
//{
//	string name;
//	int level, item;
//
//	public:
//		character(string name, int level, int item) 
//		{
//			this->name = name;
//			this->level = level;
//			this->item = item;
//		}
//		void name_change(string name)
//		{
//			this->name = name;
//		}
//		void level_up()
//		{
//			this->level += 1;
//		}
//		void item_get()
//		{
//			this->item += 1;
//		}
//		void item_use()
//		{
//			this->item -= 1;
//		}
//		void output()
//		{
//			cout << "현재 상태 출력 ";
//			cout << endl << "이름: " << name;
//			cout << endl << "level: " << level;
//			cout << endl << "item: " << item;
//			cout << endl;
//		}
//};
//
//int main()
//{
//	string name;
//	int level = 0, item = 0, num = 1;
//
//	cout << "캐릭터 이름을 입력해주세요. : ";
//	cin >> name;
//
//	character c(name, level, item);
//
//	while (num)
//	{
//		cout << endl << "1. 이름변경, 2. LEVEL UP,  3. ITEM 줍줍, 4. ITEM 사용, 5. 현재상태 출력, 0. 종료 : ";
//		cin >> num;
//		switch (num)
//		{
//		case 1:
//		{
//			cout << endl <<"캐릭터 이름을 입력해주세요. : ";
//			cin >> name;
//			c.name_change(name);
//			cout << endl;
//			break;
//		}
//		case 2:
//		{
//			cout << endl << "LEVEL UP!!! ";
//			c.level_up();
//			cout << endl;
//			break;
//		}
//		case 3:
//		{
//			cout << endl << "아이템 줍줍 ";
//			c.item_get();
//			cout << endl;
//			break;
//		}
//		case 4:
//		{
//			cout << endl << "아이템 시용 ";
//			c.item_use();
//			cout << endl;
//			break;
//		}
//		case 5:
//		{
//			c.output();
//			break;
//		}
//		}
//	}
//
//	return 0;
//}

// 번외 실습 선생님 풀이
#include <iostream>

using std::string;
using std::cout;
using std::cin;

class Character {
	string name;
	int level;
	int item;

public:
	Character(string name) {
		this->name = name;
		level = 0;
		item = 0;
	}
	void set_name(string name) {
		this->name = name;
	}
	void level_up() {
		level++;
	}
	void item_up() {
		item++;
	}
	void item_down() {
		if (item <= 0) { cout << "아이템이 없습니다.\n"; }
		else item--;
	}
	void print_info() {
		cout << name << ", level: " << level << ", item: " << item << std::endl;
	}
};

int main() {
	string name;
	cout << "캐릭터 이름을 입력하세요. ";
	cin >> name;
	Character c(name);

	int control;
	while (1) {
		cout << "캐릭터 조작 : ";
		cin >> control;
		if (control == 0) break;
		else if (control == 1) {
			cout << "바꿀 이름: ";
			cin >> name;
			c.set_name(name);
		}
		else if (control == 2) {
			c.level_up();
		}
		else if (control == 3) {
			c.item_up();
		}
		else if (control == 4) {
			c.item_down();
		}
		else if (control == 5) {
			c.print_info();
		}
		else cout << "0~5사이의 값을 입력하세요.\n";
	}

	return 0;
}
