#include <iostream>

using namespace std;



// ��ü���� 3���� 
// ������, ���м�(ĸ��ȭ) ��Ӽ�

class Player {

public:
	Player()
	{
		cout << "Player �⺻ ������ ����" << endl;

	}
	Player(int hp)
	{
		cout << "Player hp ������ ����" << endl;

		_hp = hp;
	}
	~Player()
	{
		cout << "Player �Ҹ��� ����" << endl;
	}

	void Move()
	{
		cout << "Player�� Move ȣ��" << endl;
	}
	void Attack()
	{
		cout << "Player�� Attack ȣ��" << endl;
	}
	void die()
	{
		cout << "Player�� Die ȣ��" << endl;
	}

public:

	int _hp;
	int _attack;
	int _defence;


};




class Knight : public Player
{

public:
	Knight()
	{
		cout << "Knight ������" << endl;
	}

	Knight(int stamina) : Player(100)
	{
		_stamina = stamina;
		cout << "Knight stamina ������ ȣ��" << endl;
	}

	~Knight()
	{
		cout << "Knight �Ҹ���" << endl;
	}

	void Move() { cout << "Move ȣ��" << endl; }


public:
	int _stamina;



};

class Archer : public Player
{

public:
	Archer()
	{
		cout << "Archer ������" << endl;
	}

	~Archer()
	{
		cout << "Archer �Ҹ���" << endl;
	}

	void Move() { cout << "Move ȣ��" << endl; }


public:
	int _arrow;



};

class Mage : public Player
{

public:
	Mage()
	{
		cout << "Mage ������" << endl;
	}

	~Mage()
	{
		cout << "Mage �Ҹ���" << endl;
	}

	void Move() { cout << "Move ȣ��" << endl; }


public:
	int _mp;

};


int main() {



	Knight k1(40);
	k1._attack = 10;
	k1._defence = 20;
	k1._hp = 30;
	k1._stamina = 40;

	k1.Attack();
	k1.Player::Move();

	// f5 -> �ܼ�â�� �ߴ� ���ڿ���?? -> ����Ʈ�� ������ 


}