#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//컴퓨터 크기 6의 1~25까지 랜덤의 숫자를 가진 배열 만들기(중복 x)
//사람 크기 6의 1~25까지의 지정 숫자를 가진 배열 만들기(중복 x)
//두 배열을 비교해 1개도 못맞추면 7등 -> 다 맞추면 등


int main()
{
	srand(time(NULL));
	int cum_num=0;
	int user_num=0;
	int cum_arr[6];
	int user_arr[6];
	int A = 0;
	int B = 0;
	int C = 1;

	//컴퓨터 중복 안된 1~25까지의 6개 랜덤 숫자 저장
	for (int k = 0; k < 6; k++)
	{
		int randdom_num = rand();
		int cum_num = randdom_num % 25 + 1; //랜덤 숫자 
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


	cout << "숫자는 1~25까지만 입력할 수 있습니다." << endl;

	while (1)
	{
		//유저 중복 안된 1~25까지의 숫자 6개 받기
		for (int i = 1; i < 7; i++)
		{
			cout << i << "번째 숫자를 입력하세요: "; //숫자 받기
			cin >> user_num;
			cout << user_num << endl;
			if (user_num > 25)
			{
				cout << "잘못된 숫자 입력입니다. 다시 입력해 주세요." << endl; //26이상의 숫자 받으면 다시
				i--;
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					if (user_arr[j] == user_num)
					{
						cout << "이미 입력된 숫자입니다." << endl; //중복 숫자 다시
						A++;
					}
				}
				if (A > 0)
				{
					i--;//중복된 숫자가 0보다 크다면 다시
					A = 0;
				}
				else
				{
					user_arr[i - 1] = user_num; //중복되지 않았다면 쌓기
				}
			}
		}

		for (int a = 0; a < 6; a++) //컴퓨터 숫자와 사용자 숫자 비교하기
		{
			for (int b = 0; b < 6; b++)				{
				if (user_arr[a] == cum_arr[b])
				{
					B++; //비교 숫자 몇개인지 등수 정하기
				}
			}
		}

		break;
	}
	cout << "당첨번호 공개!" << endl;
	for (int c : cum_arr)
	{
		cout << c << "  ";
	}
	cout << endl;
	cout << "1~7등까지 결과가 나올 수 있습니다." << endl;
	cout << "결과:" << 7-B << "등입니다!" << endl;

	return 0;
}