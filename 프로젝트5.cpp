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

	cout << "�߱�����" << endl;

	for (int k = 0; k < 3; k++) // ���� 1~9������ ���� ���� 3�� �ߺ� x
	{
		int randdom_num = rand();
		int cum_num = randdom_num % 9 + 1; //���� ���� 
		for (int d = 0; d < k; d++)
		{
			if (cum_arr[d] == cum_num) //�ߺ��Ǹ� �ٽ�
			{
				k--;
			}
			else
			{
				C++; //�ߺ����� �ʾҴٸ�
			}
		}
		if (C > 0)
		{
			cum_arr[k] = cum_num; //�ߺ��� ���ڰ� 0���� ũ�ٸ� �ٽ�
			C = 0;
		}
	}
	
	while (1)
	{
		Count++;
		cout << "1~9������ ���� 3���� �Է� �Ͻÿ� (�̿��� ����: ����)" << endl;
		//�������� ���� 3�� �Է� �ޱ�
		for (int i = 0; i < 3; i++)
		{
			cin >> user_num;
			if (user_num > 9 || user_num < 1)
			{
				cout << "������ �����Ͽ����ϴ�." << endl;
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
			//��Ʈ����ũ ����
			if (cum_arr[j] == user_arr[j])
			{
				S_count++;
			}
			//�� ����

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

		//��Ʈ����ũ �� ���� �ܼ־ƿ�
		cout << "Strike :" << S_count << "    " << "Ball:" << B_count << endl;

		if (S_count == 3)
		{
			cout << Count << "�� ���� ���߼̽��ϴ�." << endl;
			break;
		}
		S_count = 0;
		B_count = 0;

	}
		

	return 0;
}