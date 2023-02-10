
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
		cout << "Student�� �׽�Ʈ �Լ��Դϴ�. \n";
	}
	void infor()
	{
		cout << "��ǰ �̸� : " << name << endl;
		cout << "��ǰ ���� : " << price << endl;
		cout << "���� ȸ�� : " << company << endl << endl;
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
	Snack S[4] = { Candy(1000, "û����", "�Ե�����", "������"), Candy(1200, "��īġ", "�Ե�����", "Ŀ�Ǹ�"), 
		Chocolate(1500, "����", "�Ե� ����", "���簢��"), Chocolate(2000, "ũ��Ű", "�Ե� ����", "���簢��") };
	for (int i = 0; i < 4; i++)
	{
		S[i].infor();
	}

	return 0;
}
*/
// �߻� �޼ҵ� �ǽ�
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
		cout << "���׶��" << endl;
	}
};

class Rect : public Shape
{

public:
	void draw()
	{
		cout << "�׸�" << endl;
	}
};

class Tria : public Shape
{

public:
	void draw()
	{
		cout << "����" << endl;
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
		cout << "���� ������ �Է����ּ���. : ";
		cin >> num;
		switch (num)
		{
		case 0:
		{
			cout << "���� \n";
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
			cout << "���� ������ �߸� �Է��߽��ϴ�. \n";
			break;
		}
		}

	}
	return 0;
}