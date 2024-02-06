#include <iostream>

using namespace std;

class Snack
{
public:
	Snack(){}
	Snack(string price, string name, string company)
	{
		_price = price;
		_name = name;
		_company = company;
	}
public:

	string _price;
	string _name;
	string _company;

};

class Candy : public Snack
{
public:
	Candy(){}
	Candy(string price, string name, string company, string taste)
	{
		_price = price;
		_name = name;
		_company = company;
		_taste = taste;
	}
public:
	string _taste;

};

class Chocolate : public Snack
{
public:
	Chocolate(){}
	Chocolate(string price, string name, string company, string shape)
	{
		_price = price;
		_name = name;
		_company = company;
		_shape = shape;
	}
public:
	string _shape;

};


int main()
{
	Candy C1("1000원", "아이셔", "롯데", "신맛");
	Candy C2("500원", "추파춥스", "빙그레", "단맛");
	Chocolate Ch1("2000원", "가나", "챨리", "다크초코맛");
	Chocolate Ch2("3000원", "허쉬", "미국", "아몬드초코맛");
	
	Snack snackBasket[4] = { C1, C2, Ch1, Ch2 };

	for (Snack i : snackBasket)
	{
		cout <<"상품 이름은:"<< i._name << endl;
	}
	

	return 0;
}