#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//���� ��� ������ cpp���Ͽ��� �ϰ� ��������� ������ �ַ��Ѵ�.

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