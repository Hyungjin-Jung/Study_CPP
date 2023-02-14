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
		cout << "상품 이름 : " << name << endl;
		cout << "상품 가격 : " << price << endl;
		cout << "맛 : " << taste << endl;
		cout << "제조 회사 : " << company << endl << endl;
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
		cout << "상품 이름 : " << name << endl;
		cout << "상품 가격 : " << price << endl;
		cout << "모양 : " << shape << endl;
		cout << "제조 회사 : " << company << endl << endl;
	}
};

int main()
{
	Snack* S[4] = { new Candy(1000, "청포도", "롯데제과", "포도맛"), new Candy(1200, "스카치", "롯데제과", "커피맛"),
			new Chocolate(1500, "가나", "롯데 제과", "직사각형"), new Chocolate(2000, "크런키", "롯데 제과", "직사각형") };

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
		cout << "상품 이름 : " << name << endl;
		cout << "상품 가격 : " << price << endl;
		cout << "맛 : " << taste << endl;
		cout << "제조 회사 : " << company << endl << endl;
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
		cout << "상품 이름 : " << name << endl;
		cout << "상품 가격 : " << price << endl;
		cout << "모양 : " << shape << endl;
		cout << "제조 회사 : " << company << endl << endl;
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
		cout << "과자 바구니에 추가할 간식을 고르시오. (1: 사탕, 2: 초콜릿, 0: 종료) : ";
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
				cout << "제품명을 입력하세요. : ";
				cin >> name;
				cout << "가격을 입력하세요. : ";
				cin >> price;
				cout << "제조 회사를 입력하세요. : ";
				cin >> company;
				cout << "맛을 입력하세요. : ";
				cin >> taste;
				snacks.push_back(new Candy (price, name, company, taste));

				break;
			}
			case 2:
			{
				cout << "제품명을 입력하세요. : ";
				cin >> name;
				cout << "가격을 입력하세요. : ";
				cin >> price;
				cout << "제조 회사를 입력하세요. : ";
				cin >> company;
				cout << "모양을 입력하세요. : ";
				cin >> shape;
				snacks.push_back(new Chocolate (price, name, company, shape));
	
				break;
			}
			default:
			{
				cout << "0 ~ 2 사이의 숫자를 입력하세요. \n";
				break;
			}
		}
		cout << endl;
	} 

	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다. \n" << endl;
	
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

// 선생님 풀이
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
		this->name = "사탕";
	}
	void show_info()
	{
		cout << taste << "맛 " << name << endl;
	}
};

class Chocolate : public Snack
{
	string shape;
public:
	Chocolate(string shape)
	{
		this->shape = shape;
		this->name = "초콜릿";
	}
	void show_info()
	{
		cout << shape << "모양 " << name << endl;
	}
};

int Snack::count = 0;

int main()
{
	int type;
	vector<Snack*> snack_basket;

	while (1)
	{
		cout << "과자 바구니에 추가할 간식을 고르시오. (1: 사탕, 2: 초콜릿, 0: 종료) : ";
		cin >> type;
		
		if (type == 1)
		{
			string taste;
			cout << "맛을 입력하세요. : ";
			cin >> taste;
			snack_basket.push_back(new Candy(taste));
		}
		else if (type == 2)
		{
			string shape;
			cout << "모양을 입력하세요. : ";
			cin >> shape;
			snack_basket.push_back(new Chocolate(shape));
		}
		else if (type == 0)
		{
			cout << "종료 \n";
			break;
		}
		else
		{
			cout << "0 ~ 2 사이의 숫자를 입력하세요. \n";
		}	

		cout << endl;
	}

	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다. \n" << endl;

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
