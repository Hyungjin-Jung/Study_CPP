
/*
#include<iostream>
#include<string>

using namespace std;

class Snack
{
protected:
	double price;
	string name, company;
public:
	void test()
	{
		cout << "Student의 테스트 함수입니다. \n";
	}
	void infor()
	{
		cout << "상품 이름 : " << name << endl;
		cout << "상품 가격 : " << price << endl;
		cout << "제조 회사 : " << company << endl << endl;
	}
};

class Candy : public Snack
{
	string taste;
public:
	Candy(double price, string name, string company, string taste)
	{
		this->price = price;
		this->name = name;
		this->company = company;
		this->taste = taste;
	}
};

class Chocolate : public Snack
{
	string shape;
public:
	Chocolate(double price, string name, string company, string shape)
	{
		this->price = price;
		this->name = name;
		this->company = company;
		this->shape = shape;
	}
};

int main()
{
	Snack S[4] = { Candy(1000, "청포도", "롯데제과", "포도맛"), Candy(1200, "스카치", "롯데제과", "커피맛"), 
		Chocolate(1500, "가나", "롯데 제과", "직사각형"), Chocolate(2000, "크런키", "롯데 제과", "직사각형") };
	for (int i = 0; i < 4; i++)
	{
		S[i].infor();
	}

	return 0;
}
*/
// 추상 메소드 실습
#include<iostream>

using namespace std;

class Shape
{
protected:
	virtual void draw() = 0;
public:

};

class Circle : public Shape
{

public:
	void draw()
	{
		cout << "동그라미" << endl;
	}
};

class Rect : public Shape
{

public:
	void draw()
	{
		cout << "네모" << endl;
	}
};

class Tria : public Shape
{

public:
	void draw()
	{
		cout << "세모" << endl;
	}
};


int main()
{
	Circle c;
	Rect R;
	Tria T;

	int num = 1;

	while(num)
	{
		cout << "변의 개수를 입력해주세요. : ";
		cin >> num;
		switch (num)
		{
		case 0:
		{
			cout << "종료 \n";
			break;
		}
		case 1:
		{
			c.draw();
			break;
		}
		case 3:
		{
			c.draw();
			break;
		}
		case 4:
		{
			c.draw();
			break;
		}
		default: 
		{
			cout << "변의 개수를 잘못 입력했습니다. \n";
			break;
		}
		}

	}
	return 0;
}