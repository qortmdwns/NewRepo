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
	Candy C1("1000��", "���̼�", "�Ե�", "�Ÿ�");
	Candy C2("500��", "�����佺", "���׷�", "�ܸ�");
	Chocolate Ch1("2000��", "����", "ð��", "��ũ���ڸ�");
	Chocolate Ch2("3000��", "�㽬", "�̱�", "�Ƹ�����ڸ�");
	
	Snack snackBasket[4] = { C1, C2, Ch1, Ch2 };

	for (Snack i : snackBasket)
	{
		cout <<"��ǰ �̸���:"<< i._name << endl;
	}
	

	return 0;
}