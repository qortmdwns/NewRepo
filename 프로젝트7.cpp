#include <iostream>
#include <vector>

using namespace std;

//캐릭터 클래스
class Character
{
public:
	Character(){}

	Character(int hp)
	{
		int _hp = hp;
	}

	Character(int level)
	{
		int _level = level;
	}

	void PickWeapon(class Weapon* weapon)

	void Attack(_damage - _hp)

public:
	int _hp =50;
	int _level;

};

//무기 클래스
class Weapon
{
public:

	Weapon(){}

	Weapon(int damage)
	{
		_damage = damage;
	}

	Weapon(int attackcount)
	{
		_attackcount = attackcount;
	}

	virtual void Attack() = 0;

public:
	int _damage;
	int _attackcount;

};

//검 클래스
class Knife : public Weapon
{
public:
	Knife(){}

	Knife(int damage)
	{
		_damage = damage;
	}

	Knife(int attackcount)
	{
		_attackcount = attackcount;
	}

	void Attack()
	{
		cout << "찌르기" << endl;
	}

public:
	int _damage = 5;
	int _attackcount = 3;

};

//총 클래스
class Gun : public Weapon
{
public:
	Gun(){}

	Gun(int damage)
	{
		_damage = damage;
	}

	Gun(int attackcount)
	{
		_attackcount = attackcount;
	}

	void Attack()
	{
		cout << "총쏘기" << endl;
	}

public:
	int _damage = 10;
	int _attackcount = 1;

};


int main()
{



	return 0;
}
