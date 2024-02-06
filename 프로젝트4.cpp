#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num ;
	//사용자로 부터 홀수 n을 입력 받아 n*n의 마방진 만들기
	cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요.";
	cin >> num;
	cout << endl;
	if (num % 2 == 0)
	{
		return 0;
	}
	int** arr = new int* [num];
	for (int i = 0; i < num; i++) 
	{
		arr[i] = new int[num];
	}

	for (int j = 0; j < num; j++)
	{
		for (int k = 0; k < num; k++)
		{
			arr[j][k] = 0;
		}
	}

	//1은 첫행의 가운데 위치
	int x = 0;
	int y = num/2;
	int start = 1;
	arr[x][y] = start;

	while (start < num*num)
	{	
		int a = x;
		int b = y;
		//첫 번째 행에서 우상단으로 이동할 때는 마지막 행의 다음 열로 이동(1 증가)
		if (x == 0)
		{
			x = num - 1;
			y = y + 1;
		}
		//마지막 열에서 우상단으로 이동할 때는 첫 번째 열의 이전 행으로 이동(1 증가)
		else if (y == num - 1)
		{
			x = x - 1;
			y = 0;
		}
		//첫 번째 행의 마지막 열은 우상단이 아니라 바로 아래칸으로 이동 (1증가)
		else if (x == 0 && y == num-1)
		{
			x = x + 1;
		}
		//우상단(오른쪽 대각선)으로 이동(1씩 증가)
		else
		{
			x = x - 1;
			y = y + 1;
		}
		//이미 칸이 채워져 있으면 바로 아래 칸(1증가)
		if (arr[x][y] != 0)
		{
			x = a + 1;
			y = b;
		}

		start++;
		arr[x][y]=start;
	}
	
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int v = 0; v < num; v++)
	{
		delete arr[v];
	}

	delete[] arr;
	
	return 0;
}