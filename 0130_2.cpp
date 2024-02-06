#include <iostream>

using namespace std;

enum ItemType
{
	IT_WEAPON = 1,
	IT_ARMOR = 2,

};

class Item
{
public:
	Item()
	{

		cout << "Item()" << endl;
	}

	Item(int itemType) : _itemType(itemType)
	{
		cout << "ItemType()" << endl;
		_itemType = itemType;
	}

	Item(const Item& item)
	{
		cout << "Item(const Item&item)" << endl;
	}

	virtual ~Item()
	{
		cout << "~Item" << endl;

	}



public:
	int _itemType = 0;
	int _itemDbId = 0;
	char _dummy[4096] = {};
};

class Knight
{
public:
	Knight()
	{

	}

	~Knight()
	{

	}



};

class Weapon : public Item
{
public:
	Weapon() :Item(IT_WEAPON)
	{

	}

	virtual ~Weapon()
	{
		cout << "~Weapon()" << endl;

	}

public:
	int _damage = 3;
};

class Armor : public Item
{

public:
	Armor() :Item(IT_ARMOR)
	{

	}

	~Armor()
	{
		cout << "~Armor()" << endl;
	}

public:
	int _defence = 0;
};

// visual studio���� �����ϴ� �����Ϸ�(�ڵ念�� -> ��������(����))
// �����Ϸ��� �Ѱ���?
// O, X

int main()
{
	// �������� ���� Ŭ���� ������ ������ ��ȯ �׽�Ʈ
	{

		Knight* knight = new Knight();

		Item* item = (Item*)knight;


		//item->_itemDbId = 4; // �̷��� ������ �ſ�ſ�ſ� �ɰ������ϴ�.

		//delete item;

	}

	// �θ� -> �ڽ�

	{

		Item* item = new Item();


		//weapon->_damage = 10;

		//delete weapon;

	}
	
	// �ڽ� -> �θ�

	{
		Weapon* weapon = new Weapon();

		Item* item = weapon;

	}


	// ���� 
	// invetory -> armor, weapon
	Item* inventory[20] = {};

	// random�� ������ ����?
	// ��ǻ�� 

	// seed (�ð�)
	srand((unsigned int)time(nullptr));

	for (int i = 0; i < 20; i++)
	{
		int randValue = rand() % 2;
		switch (randValue)
		{
		case 0:
			inventory[i] = new Weapon();
			break;
		case 1:
			inventory[i] = new Armor();
			break;

		}
	}

	for (int i = 0; i < 20; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
		{
			continue;
		}
		if (item->_itemType == IT_WEAPON)
		{
			Weapon* weapon = (Weapon*)item;
			cout << "Weapon damage : " << weapon->_damage << endl;

		}

	}



	// �ſ�ſ칫�ֹ������ֿ�

	for (int i = 0; i < 20; i++)
	{
		Item* item = inventory[i];

		delete item;

		//if (item->_itemType == IT_WEAPON)
		//{
		//	Weapon* weapon = (Weapon*)item;
		//	delete weapon;
		//}
		//else
		//{
		//		Armor* armor = (Armor*)item;
		//		delete armor;
		//}


	}



	return 0;


}