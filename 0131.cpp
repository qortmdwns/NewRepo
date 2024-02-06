#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//보통 기능 구현은 cpp파일에서 하고 헤더파일은 선언을 주로한다.

int main()
{
	srand(time(NULL));
	int randdom_num = rand();
	int num[6];
	int arr;

	for (int i = 0; i < 6; i++)
	{
		arr = randdom_num%45 + 1;
		for (int j = 0; j <= i; j++)
		{
			if (arr == num[j])
			{
				i--;
			}
		}
		num[i] = arr;
	}
	for (int a : num)
	{
		cout << a << endl;
	}


	return 0;
}