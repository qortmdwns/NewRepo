#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


//input 값은 1부터 시작 output 값은 input+1부터 시작
//컴퓨터는 1~3번 자동으로 input을 넣음
//랜덤은 1~3으로 지정하고 1을 넣으면 내가 낸 숫자에 1을 3을 넣으면 3을 더해서 다음 수를 내가 부를 수 있게 
//마지막 수가 31이 되면 false가 되고 게임을 종료함(while을 사용하는게 좋을까?)
//메인 함수 들어가기 전에 만들어 놓을 함수를 생각해보자
//1. 1부터 3까지 사용자가 숫자 넣기, 1부터 3까지 컴퓨터가 랜덤으로 숫자 넣기
//메인 함수에서는 1부터 3까지 숫자를 넣고 31게임을 시작하고 끝마추기


int main()
{
	
	int input = 0;
	srand(time(NULL));
	int user_num = 0;

	while (1)
	{
		int randdom_num = rand();
		int cum_num = randdom_num % 3+1;

		cout << "개수를 입력하세요 :" << endl;
		cin >> user_num;
		
		if (user_num > 3)
		{
			cout << "1~3사이의 수를 입력해주세요." << endl;
			cin >> user_num;
			if (user_num > 3)
			{
				break;
			}
		}
		else
		{
			cout << "사용자가 부른 숫자:" << endl;
			for (int i = 0; i < user_num; i++)
			{
				input += 1;
				cout << input << endl;
				if (input > 30)
				{
					cout << "게임 종료 컴퓨터의 승리입니다." << endl;
					break;
				}
			}
		}

		if (input > 30)
		{
			break;
		}

		cout << "컴퓨터가 부른 숫자:" << endl;
		for (int j = 0; j < cum_num; j++)
		{
			input += 1;
			cout << input << endl;
			if (input > 30)
			{
				cout << "게임 종료 사용자의 승리입니다." << endl;
				break;
			}
		}

		if (input > 30)
		{
			break;
		}
		
	}

	return 0;
}