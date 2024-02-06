#include <iostream>

using namespace std;


//�ǽ� 1,2,3 �Ѳ�����
class Shape
{
public:
	Shape(){}
	Shape(double num, double Ulen)
	{
		_num = num;
		_Ulen = Ulen;
	}
	double printInfo()
	{
		cout << _num << "    " << _Ulen<<endl;
	}

public:
	double _num;
	double _Ulen;


};

class Rectangle : public Shape
{
public:
	Rectangle(double width, double num, double Ulen)
	{
		_width = width;
		_num = num;
		_Ulen = Ulen;
	}

	double area()
	{
		return _Ulen * _width;
	}
	void printInfo()
	{
		cout <<"�������̵� �簢���� ���̴�:"<<(_Ulen * _width)<< endl;
	}
	void printInfo(double w, double h)
	{
		cout << "�����ε� �簢���� ���̴�:" << (w * h) << endl;
	}
public:
	double _width;

};

class Triangle : public Shape
{
public:
	Triangle(double height, double num, double Ulen)
	{
		_height = height;
		_num = num;
		_Ulen = Ulen;
	}

	double area()
	{
		return (_Ulen * _height)/2;
	}
	void printInfo()
	{
		cout << "�������̵� �ﰢ���� ���̴�:" << (_Ulen * _height) / 2 << endl;
	}
	void printInfo(double w, double h)
	{
		cout << "�����ε� �ﰢ���� ���̴�:" << (w * h)/2 << endl;
	}

public:
	double _height;

};





int main()
{
	Rectangle R(3, 4, 3);
	Triangle T(3, 4, 3);
	cout << R.area() << "   " << T.area() << endl;
	R.printInfo();
	T.printInfo();
	R.printInfo(7,8);
	T.printInfo(7,8);







	return 0;
}