#include <iostream>


using namespace std;

class Rectangle
{
public:
	Rectangle()
	{
		double width;
		double height;
		cout << "생성자 실행" << endl;
	}


	Rectangle(double width, double height)
	{
		_width = width;
		_height = height;
	}
	double get_width()
	{
		return _width;
	}
	double get_height()
	{
		return _height;
	}
	void set_width(double _width)
	{
		_width = _width;
	}
	void set_height(double _height)
	{
		_height = _height;
	}


	double area()
	{
		return _width * _height;
	}

	Rectangle(const Rectangle& Rectangle)
	{
		cout << "복사 생성자 호출" << endl;
		_width = Rectangle._width;
		_height = Rectangle._height;
	}
public:
	double _width;
	double _height;

};


int main()
{
	Rectangle square1;

	cout << "가로 세로를 입력하세요:" << "\n";
	cin >> square1._width >> square1._height;
	
	Rectangle square = square1;

	cout <<"square의 넓이는:" << (square._width * square._height)<<endl;

	cout << "area의 값은:" << square.area() << endl;

	Rectangle square3 = square;

	cout << "square3의 넓이는:" << (square._width * square._height) << endl;

	cout << "area의 값은:" << square.area() << endl;
	
	






	return 0;
}