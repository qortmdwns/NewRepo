#include <iostream>



using namespace std;

// ::
// 1) ���ӽ����̽� ��
// 2) Ŭ������ ����� ������ ��

//��� �Լ�
//������ constructor / ������ ���� ����
//�Ҹ��� destructor / 1��

//Ŭ������ ���鶧�� Ŭ�������� �빮�ڷ� �����ϴ°� ����
class Knight
{
public:
	Knight()
	{
		cout << "������ ����" << endl;
		cout << "my life for aiur" << endl;
	}
	Knight(int hp, int attack, int y, int x)
	{
		_hp = hp;
		_attack = attack;
		_posY = y;
		_posX = x;
	}
	//���� ������
	Knight(const Knight& Knight)
	{
		cout << "���� ������ ȣ��" << endl;
		_hp = Knight._hp;
		_attack = Knight._attack;
		_posY = Knight._posY;
		_posX = Knight._posX;


	}
	//Ÿ�� ��ȯ ������
	explicit Knight(int hp)
	{
		cout << "������ hpȣ��" << endl;
		_hp = hp;
	}
	~Knight()
	{
		cout << "�Ҹ��� ����" << endl;
	}
	
	
	//������Ʈ ���� ������ Ȥ�� ���� ������
public:
	void MoveKnight(int x, int y)
	{
		_posY = y;
		_posX = x;
	}

	void Attack();
	



public:

	// _ �� m�� Ŭ������ ������ ���� �˷��ֱ� ����
	int _hp;
	int _attack;
	int _posY;
	int _posX;

	


};

void Knight::Attack()
	{
		cout << "��������"<<_attack<< "��ŭ ������." << endl;
	}


void Move(Knight* k, int x, int y)
{
	
	k->MoveKnight(x, y);
}

int main()
{
	Knight k1;
	Knight k2;

	//k1.MoveKnight(3, 4);
	//k2.MoveKnight(10, 20);
	//k1.Attack();

	Move(&k1, 3, 4);

	Knight k3(140, 16, 10, 10);
	Knight k4(k3);

	cout << k3._posX << "    " << k3._posY<<endl;
	cout << k4._posX << "    " << k4._posY<<endl;
	Knight k5;
	k5 = k1;
	Knight k6 = k1;







	return 0;
}
