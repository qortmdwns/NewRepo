#include <iostream>

using namespace std;



// ��ü���� 3���� 
// ������, ���м�(ĸ��ȭ), ��Ӽ�, �߻�ȭ

// 1. ���������ϰ� �ǵ帮�� �ȵǴ°͵�
// 2. �ٸ� ��η� �����ϰ� ���� ��
// get , set

// ����
// ������ġ
// ��
// ����
// �ڵ�
// ���⼱

// ������
// Ŭ����
// ������
// �����õ�
// 
// 
// ��������
// ���⼱����

// ����� -> ������ �����ؾ�? ���峵���� �Ȱ��峵���� �˲���������.


class Car
{

public:
	void MoveHandle() {}
	void pushpedal() {}
	void opendoor() {}

	void turnkey()
	{
		// ���ȵ� �վ�ߵǰ�
		// ���⼱�� ������ �ߵǾߵǰ�..

		runEngine();
	}

protected:
	void disassemble() {}
	void runEngine() {}
	void connectcircuit() {}

public:
	// �ڵ�
	// ���
	// ��
	// ����
	// 

};

class Supercar : public Car
{
public:
	void RemoteKey()
	{
		runEngine();
	}

};



class Berserker
{
public:

	int GetHp() { return _hp; }
	void SetHp(int hp)
	{
		_hp = hp;
		if (_hp < 50)
		{
			SetBerserkerMode();
		}

	}


private:
	void SetBerserkerMode()
	{
		cout << "���ݷ� ���� �����ϴ�." << endl;
	}

	int _hp;

};



int main()
{

	Car mycar;

	Berserker olaf;




}

