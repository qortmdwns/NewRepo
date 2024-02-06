#include <iostream>

using namespace std;

class Person
{
public:
	virtual void intro()
	{
		cout << "����Դϴ�~" << endl;
	}
};
class Student :public Person
{
	string name;
public:
	Student(string name)
	{
		this->name = name;

	}
	void intro()
	{
		cout << name << "�л��Դϴ�." << endl;
	}
	void learn()
	{
		cout << "���ϴ�." << endl;

	}
};

class Teacher :public Person {
	string name;
public:
	Teacher(string name)
	{
		this->name = name;

	}
	void intro()
	{
		cout << name << "�����Դϴ�." << endl;
	}
	void teach()
	{
		cout << "����Ĩ�ϴ�." << endl;
	}
};

int main()
{
	Person* pList[3];
	string names[3];

	cout << "3���� �̸��� �Է����ּ���. (������, �л�, �л�)" << endl;
	cin >> names[0] >> names[1] >> names[2];

	Teacher T(names[0]);
	Student S1(names[1]);
	Student S2(names[2]);

	pList[0] = &T;
	pList[1] = &S1;
	pList[2] = &S2;

	for (auto p : pList)
	{
		p->intro();
	}

	T.teach();
	S1.learn();
	S2.learn();
	

	return 0;
}