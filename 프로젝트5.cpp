#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int cum_num = 0;
	int user_num = 0;
	int cum_arr[3];
	int user_arr[3];
	int Count = 0;
	int S_count = 0;
	int B_count = 0;
	int C = 1;

	cout << "야구게임" << endl;

	for (int k = 0; k < 3; k++) // 컴터 1~9까지의 랜덤 숫자 3개 중복 x
	{
		int randdom_num = rand();
		int cum_num = randdom_num % 9 + 1; //랜덤 숫자 
		for (int d = 0; d < k; d++)
		{
			if (cum_arr[d] == cum_num) //중복되면 다시
			{
				k--;
			}
			else
			{
				C++; //중복되지 않았다면
			}
		}
		if (C > 0)
		{
			cum_arr[k] = cum_num; //중복된 숫자가 0보다 크다면 다시
			C = 0;
		}
	}
	
	while (1)
	{
		Count++;
		cout << "1~9사이의 숫자 3개를 입력 하시오 (이외의 숫자: 종료)" << endl;
		//유저에게 숫자 3개 입력 받기
		for (int i = 0; i < 3; i++)
		{
			cin >> user_num;
			if (user_num > 9 || user_num < 1)
			{
				cout << "게임을 종료하였습니다." << endl;
				return 0;
			}
			else
			{
				user_arr[i] = user_num;
			}
		}

		for (int c : user_arr)
		{
			cout << c << " ";
		}
		cout << endl;

		for (int j = 0; j < 3; j++)
		{
			//스트라이크 개수
			if (cum_arr[j] == user_arr[j])
			{
				S_count++;
			}
			//볼 개수

			for (int k = 0; k < 3; k++)
			{	
				if (j == k)
				{
					continue;
				}
				if (cum_arr[j] == user_arr[k])
				{
					B_count++;
				}
			}
		}

		//스트라이크 볼 개수 콘솔아웃
		cout << "Strike :" << S_count << "    " << "Ball:" << B_count << endl;

		if (S_count == 3)
		{
			cout << Count << "번 만에 맞추셨습니다." << endl;
			break;
		}
		S_count = 0;
		B_count = 0;

	}
		

	return 0;
}