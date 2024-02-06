#include <iostream>



using namespace std;

// ::
// 1) 네임스페이스 안
// 2) 클래스의 멤버에 접근할 때

//멤버 함수
//생성자 constructor / 여러개 존재 가능
//소멸자 destructor / 1개

//클래스를 만들때는 클래스명을 대문자로 시작하는게 관습
class Knight
{
public:
	Knight()
	{
		cout << "생성자 실행" << endl;
		cout << "my life for aiur" << endl;
	}
	Knight(int hp, int attack, int y, int x)
	{
		_hp = hp;
		_attack = attack;
		_posY = y;
		_posX = x;
	}
	//복사 생성자
	Knight(const Knight& Knight)
	{
		cout << "복사 생성자 호출" << endl;
		_hp = Knight._hp;
		_attack = Knight._attack;
		_posY = Knight._posY;
		_posX = Knight._posX;


	}
	//타입 변환 생성자
	explicit Knight(int hp)
	{
		cout << "생성자 hp호출" << endl;
		_hp = hp;
	}
	~Knight()
	{
		cout << "소멸자 실행" << endl;
	}
	
	
	//프로텍트 접근 지시자 혹은 접근 제한자
public:
	void MoveKnight(int x, int y)
	{
		_posY = y;
		_posX = x;
	}

	void Attack();
	



public:

	// _ 나 m은 클래스의 멤버라는 것을 알려주기 위함
	int _hp;
	int _attack;
	int _posY;
	int _posX;

	


};

void Knight::Attack()
	{
		cout << "데미지를"<<_attack<< "만큼 입혔다." << endl;
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
