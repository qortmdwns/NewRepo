#include <iostream>
#include <vector>

using namespace std;

class Calculator
{

public:
	Calculator(){}

	virtual void Cal_num() = 0;

public:
	static int result;
	static int num1;
	static int num2;

};

int Calculator::num1 = 0;
int Calculator::num2 = 0;
int Calculator::result = 0;


//����
class Add : public Calculator
{
public:
	Add (){}

	void Cal_num()
	{
		Calculator::result = Calculator::num1 + Calculator::num2;
		cout << "���:" << Calculator::result << endl;
	}

};

//����
class Sub : public Calculator
{
public:
	Sub(){}

	void Cal_num()
	{
		Calculator::result = Calculator::num1 - Calculator::num2;
		cout << "���:" << Calculator::result << endl;
	}

};

//����
class Mul : public Calculator
{
public:
	Mul() {}

	void Cal_num()
	{
		Calculator::result = Calculator::num1* Calculator::num2;
		cout << "���:" << Calculator::result << endl;
	}

};

//������
class Dev : public Calculator
{
public:
	Dev(){}

	void Cal_num()
	{
		Calculator::result = Calculator::num1 / Calculator::num2;
		cout << "���:" << Calculator::result << endl;
	}

};

void Need(Calculator* cal)
{
	cal->Cal_num();
}

int main()
{
	string next;
	string need;
	int Y_EXIT=1;
	cout << "���ڸ� �Է����ּ��� : ";
	cin >> Calculator::num1;
	cout << endl;

	while(Y_EXIT)
	{ 
		cout << "�����ڸ� �Է����ּ��� : ";
		cin >> need;
		cout << endl;

		cout << "���ڸ� �Է����ּ��� : ";
		cin >> Calculator::num2;
		cout << endl;


		if (need == "+")
		{
			cout << "______________________________"<<endl;
			Calculator* add = new Add;
			Need(add);
		}
		else if (need == "-")
		{
			cout << "______________________________" << endl;
			Calculator* sub = new Sub;
			Need(sub);
		}
		else if (need == "*")
		{
			cout << "______________________________" << endl;
			Calculator* mul = new Mul;
			Need(mul);
		}
		else if (need == "/")
		{
			cout << "______________________________" << endl;
			Calculator* dev = new Dev;
			Need(dev);
		}

		cout << "������ ��� �����Ͻðڽ��ϱ�? (Y: ���, AC: �ʱ�ȭ, EXIT: ����)" << endl;
		cin >> next;

		if (next == "Y")
		{
			Calculator::num1 = Calculator::result;
			Y_EXIT = 1;
		}
		else if (next == "EXIT")
		{
			Y_EXIT = 0;
		}
		else if (next == "AC")
		{
			Calculator::num1 = 0;
			Calculator::num2 = 0;
			Calculator::result = 0;
			cout << "���ڸ� �Է��� �ּ��� : " << endl;
			cin >> Calculator::num1;
			Y_EXIT = 1;
		}

	}

	return 0;
}