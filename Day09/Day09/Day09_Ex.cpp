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
	virtual void info()
	{}
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
	void info()
	{
		cout << "��ǰ �̸� : " << name << endl;
		cout << "��ǰ ���� : " << price << endl;
		cout << "�� : " << taste << endl;
		cout << "���� ȸ�� : " << company << endl << endl;
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
	void info()
	{
		cout << "��ǰ �̸� : " << name << endl;
		cout << "��ǰ ���� : " << price << endl;
		cout << "��� : " << shape << endl;
		cout << "���� ȸ�� : " << company << endl << endl;
	}
};

int main()
{
	Snack* S[4] = { new Candy(1000, "û����", "�Ե�����", "������"), new Candy(1200, "��īġ", "�Ե�����", "Ŀ�Ǹ�"),
			new Chocolate(1500, "����", "�Ե� ����", "���簢��"), new Chocolate(2000, "ũ��Ű", "�Ե� ����", "���簢��") };

	for (int i = 0; i < 4; i++)
	{
		S[i]->info();
	}
	
	for (int i = 0; i < 4; i++)
	{
		delete S[i];
	}

	return 0;
}
*/

#include<iostream>
#include<vector>

using namespace std;

using std::cout;
using std::cin;

class Snack
{
protected:
	double price;
	string name, company, taste, shape;
	static int count;
public:
	virtual void info()
	{
		cout << "��ǰ �̸� : " << name << endl;
		cout << "��ǰ ���� : " << price << endl;
		cout << "�� : " << taste << endl;
		cout << "��� : " << shape << endl;
		cout << "���� ȸ�� : " << company << endl << endl;
	}
	static int get_count()
	{
		return count;
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
		count++;
	}
	void info()
	{
		cout << "��ǰ �̸� : " << name << endl;
		cout << "��ǰ ���� : " << price << endl;
		cout << "�� : " << taste << endl;
		cout << "���� ȸ�� : " << company << endl << endl;
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
		count++;
	}
	void info()
	{
		cout << "��ǰ �̸� : " << name << endl;
		cout << "��ǰ ���� : " << price << endl;
		cout << "��� : " << shape << endl;
		cout << "���� ȸ�� : " << company << endl << endl;
	}
	void input()
	{
		cout << "����: " << endl;
		cin >> price;
	}
};

int Snack::count = 0;

int main()
{
	/*
	Snack* S[4] = { new Candy(1000, "û����", "�Ե�����", "������"), new Candy(1200, "��īġ", "�Ե�����", "Ŀ�Ǹ�"),
			new Chocolate(1500, "����", "�Ե� ����", "���簢��"), new Chocolate(2000, "ũ��Ű", "�Ե� ����", "���簢��") };
	*/
	int num = 1;
	double price = 0; 
	string name, company, shape, taste;
	Snack s;

	vector<Snack*> snacks; /* = {new Candy(price, name, company, taste) ,
		new Chocolate(price, name, company, shape) }*/
	while (num)
	{
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�. (1: ����, 2: ���ݸ�, 0: ����) : ";
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
				cout << "��ǰ���� �Է��ϼ���. : ";
				cin >> name;
				cout << "������ �Է��ϼ���. : ";
				cin >> price;
				cout << "���� ȸ�縦 �Է��ϼ���. : ";
				cin >> company;
				cout << "���� �Է��ϼ���. : ";
				cin >> taste;
				snacks.push_back(new Chocolate(price, name, company, taste));

				break;
			}
			case 2:
			{
				cout << "��ǰ���� �Է��ϼ���. : ";
				cin >> name;
				cout << "������ �Է��ϼ���. : ";
				cin >> price;
				cout << "���� ȸ�縦 �Է��ϼ���. : ";
				cin >> company;
				cout << "����� �Է��ϼ���. : ";
				cin >> shape;
				snacks.push_back(new Candy (price, name, company, shape));
	
				break;
			}
			default:
			{
				cout << "0 ~ 2 ������ ���ڸ� �Է��ϼ���. \n\n";
				break;
			}
		}
	} 

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�." << endl;
	
	int size = snacks.size();
	cout << size;

	for (int i = 0; i < size; i++)
	{
		snacks[i];
		cout << " o";
	}

	
	for (int i = 0; i < size; i++)
	{
		delete snacks.at(i);
	}
	

	return 0;
}