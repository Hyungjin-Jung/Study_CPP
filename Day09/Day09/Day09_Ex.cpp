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
/*
#include<iostream>
#include<vector>

using namespace std;

class Snack
{
protected:
	double price;
	string name, company, taste, shape;
	static int count;
public:
	virtual void info()
	{}
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
};

int Snack::count = 0;

int main()
{
	int num = 1;
	double price = 0; 
	string name, company, shape, taste;
	Snack s;
	vector<Snack*> snacks;

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
				snacks.push_back(new Candy (price, name, company, taste));

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
				snacks.push_back(new Chocolate (price, name, company, shape));
	
				break;
			}
			default:
			{
				cout << "0 ~ 2 ������ ���ڸ� �Է��ϼ���. \n";
				break;
			}
		}
		cout << endl;
	} 

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�. \n" << endl;
	
	int size = snacks.size();

	for (int i = 0; i < size; i++)
	{
		snacks[i]->info();
	}
	
	for (int i = 0; i < size; i++)
	{
		delete snacks.at(i);
	}

	return 0;
}
*/

// ������ Ǯ��
#include<iostream>
#include<vector>

using namespace std;

class Snack
{
protected:
	string name;
	static int count;
public:
	Snack()
	{
		count++;
	}
	virtual void show_info()
	{
		cout << name << endl;
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
	Candy(string taste)
	{
		this->taste = taste;
		this->name = "����";
	}
	void show_info()
	{
		cout << taste << "�� " << name << endl;
	}
};

class Chocolate : public Snack
{
	string shape;
public:
	Chocolate(string shape)
	{
		this->shape = shape;
		this->name = "���ݸ�";
	}
	void show_info()
	{
		cout << shape << "��� " << name << endl;
	}
};

int Snack::count = 0;

int main()
{
	int type;
	vector<Snack*> snack_basket;

	while (1)
	{
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�. (1: ����, 2: ���ݸ�, 0: ����) : ";
		cin >> type;
		
		if (type == 1)
		{
			string taste;
			cout << "���� �Է��ϼ���. : ";
			cin >> taste;
			snack_basket.push_back(new Candy(taste));
		}
		else if (type == 2)
		{
			string shape;
			cout << "����� �Է��ϼ���. : ";
			cin >> shape;
			snack_basket.push_back(new Chocolate(shape));
		}
		else if (type == 0)
		{
			cout << "���� \n";
			break;
		}
		else
		{
			cout << "0 ~ 2 ������ ���ڸ� �Է��ϼ���. \n";
		}	

		cout << endl;
	}

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�. \n" << endl;

	int size = snack_basket.size();

	for (Snack* snack : snack_basket)
	{
		snack->show_info();
	}

	for (Snack* snack : snack_basket)
	{
		delete snack;
	}

	snack_basket.clear();

	return 0;
}
