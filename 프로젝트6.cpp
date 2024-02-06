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


//덧셈
class Add : public Calculator
{
public:
	Add (){}

	void Cal_num()
	{
		Calculator::result = Calculator::num1 + Calculator::num2;
		cout << "결과:" << Calculator::result << endl;
	}

};

//뺄셈
class Sub : public Calculator
{
public:
	Sub(){}

	void Cal_num()
	{
		Calculator::result = Calculator::num1 - Calculator::num2;
		cout << "결과:" << Calculator::result << endl;
	}

};

//곱셈
class Mul : public Calculator
{
public:
	Mul() {}

	void Cal_num()
	{
		Calculator::result = Calculator::num1* Calculator::num2;
		cout << "결과:" << Calculator::result << endl;
	}

};

//나눗셈
class Dev : public Calculator
{
public:
	Dev(){}

	void Cal_num()
	{
		Calculator::result = Calculator::num1 / Calculator::num2;
		cout << "결과:" << Calculator::result << endl;
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
	cout << "숫자를 입력해주세요 : ";
	cin >> Calculator::num1;
	cout << endl;

	while(Y_EXIT)
	{ 
		cout << "연산자를 입력해주세요 : ";
		cin >> need;
		cout << endl;

		cout << "숫자를 입력해주세요 : ";
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

		cout << "연산을 계속 진행하시겠습니까? (Y: 계속, AC: 초기화, EXIT: 종료)" << endl;
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
			cout << "숫자를 입력해 주세요 : " << endl;
			cin >> Calculator::num1;
			Y_EXIT = 1;
		}

	}

	return 0;
}