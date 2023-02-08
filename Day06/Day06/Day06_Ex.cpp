////-------------����ü(struct) �ǽ�--------------
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
//	cout << "����, ���� ���̸� �Է��ϼ���. : ";
//
//	cin >> R.width;
//	cin >> R.height;
//
//	cout << "���̴� : " << R.width * R.height;
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
//	cout << "����, ���� ���̸� �Է��ϼ���. : ";
//
//	cin >> width >> height;
//
//	cout << "���̴� : " << R.area(width, height);
//
//	return 0;
//}

#include<iostream>
#include<string>

using namespace std;

class character
{
	string name;
	int level, item;

	public:
		character(string name, int level, int item) 
		{
			this->name = name;
			this->level = level;
			this->item = item;
		}
		void name_change(string name)
		{
			this->name = name;
		}
		void level_up()
		{
			this->level += 1;
		}
		void item_get()
		{
			this->item += 1;
		}
		void item_use()
		{
			this->item -= 1;
		}
		void output()
		{
			cout << "���� ���� ��� ";
			cout << endl << "�̸�: " << name;
			cout << endl << "level: " << level;
			cout << endl << "item: " << item;
			cout << endl;
		}
};

int main()
{
	string name;
	int level = 0, item = 0, num = 1;

	cout << "ĳ���� �̸��� �Է����ּ���. : ";
	cin >> name;

	character c(name, level, item);

	while (num)
	{
		cout << endl << "1. �̸�����, 2. LEVEL UP,  3. ITEM ����, 4. ITEM ���, 5. ������� ���, 0. ���� : ";
		cin >> num;
		switch (num)
		{
		case 1:
		{
			cout << endl <<"ĳ���� �̸��� �Է����ּ���. : ";
			cin >> name;
			c.name_change(name);
			cout << endl;
			break;
		}
		case 2:
		{
			cout << endl << "LEVEL UP!!! ";
			c.level_up();
			cout << endl;
			break;
		}
		case 3:
		{
			cout << endl << "������ ���� ";
			c.item_get();
			cout << endl;
			break;
		}
		case 4:
		{
			cout << endl << "������ �ÿ� ";
			c.item_use();
			cout << endl;
			break;
		}
		case 5:
		{
			c.output();
			break;
		}
		}
	}

	return 0;
}
