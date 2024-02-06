#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num ;
	//����ڷ� ���� Ȧ�� n�� �Է� �޾� n*n�� ������ �����
	cout << "�������� �� Ȥ�� ���� ���� �ڿ����� �Է����ּ���.";
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

	//1�� ù���� ��� ��ġ
	int x = 0;
	int y = num/2;
	int start = 1;
	arr[x][y] = start;

	while (start < num*num)
	{	
		int a = x;
		int b = y;
		//ù ��° �࿡�� �������� �̵��� ���� ������ ���� ���� ���� �̵�(1 ����)
		if (x == 0)
		{
			x = num - 1;
			y = y + 1;
		}
		//������ ������ �������� �̵��� ���� ù ��° ���� ���� ������ �̵�(1 ����)
		else if (y == num - 1)
		{
			x = x - 1;
			y = 0;
		}
		//ù ��° ���� ������ ���� ������ �ƴ϶� �ٷ� �Ʒ�ĭ���� �̵� (1����)
		else if (x == 0 && y == num-1)
		{
			x = x + 1;
		}
		//����(������ �밢��)���� �̵�(1�� ����)
		else
		{
			x = x - 1;
			y = y + 1;
		}
		//�̹� ĭ�� ä���� ������ �ٷ� �Ʒ� ĭ(1����)
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