#include <iostream>

using namespace std;

class Shape
{
protected:
	virtual void draw() = 0;
};

class Circle : protected Shape
{
public:
	void draw()
	{
		cout << "도형의 이름은: Circle 입니다." << endl;
	}
};

class Rect : protected Shape
{
public:
	void draw()
	{
		cout << "도형의 이름은: Rect 입니다." << endl;
	}
};

class Triangle : protected Shape
{
public:
	void draw()
	{
		cout << "도형의 이름은: Triangle 입니다." << endl;
	}
};


int main()
{
	Circle C;
	Rect R;
	Triangle T;
	C.draw();
	R.draw();
	T.draw();

	return 0;
}