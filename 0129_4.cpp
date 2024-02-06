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
		cout << "������ �̸���: Circle �Դϴ�." << endl;
	}
};

class Rect : protected Shape
{
public:
	void draw()
	{
		cout << "������ �̸���: Rect �Դϴ�." << endl;
	}
};

class Triangle : protected Shape
{
public:
	void draw()
	{
		cout << "������ �̸���: Triangle �Դϴ�." << endl;
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