#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//��ǻ�� ũ�� 6�� 1~25���� ������ ���ڸ� ���� �迭 �����(�ߺ� x)
//��� ũ�� 6�� 1~25������ ���� ���ڸ� ���� �迭 �����(�ߺ� x)
//�� �迭�� ���� 1���� �����߸� 7�� -> �� ���߸� ��


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

	//��ǻ�� �ߺ� �ȵ� 1~25������ 6�� ���� ���� ����
	for (int k = 0; k < 6; k++)
	{
		int randdom_num = rand();
		int cum_num = randdom_num % 25 + 1; //���� ���� 
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


	cout << "���ڴ� 1~25������ �Է��� �� �ֽ��ϴ�." << endl;

	while (1)
	{
		//���� �ߺ� �ȵ� 1~25������ ���� 6�� �ޱ�
		for (int i = 1; i < 7; i++)
		{
			cout << i << "��° ���ڸ� �Է��ϼ���: "; //���� �ޱ�
			cin >> user_num;
			cout << user_num << endl;
			if (user_num > 25)
			{
				cout << "�߸��� ���� �Է��Դϴ�. �ٽ� �Է��� �ּ���." << endl; //26�̻��� ���� ������ �ٽ�
				i--;
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					if (user_arr[j] == user_num)
					{
						cout << "�̹� �Էµ� �����Դϴ�." << endl; //�ߺ� ���� �ٽ�
						A++;
					}
				}
				if (A > 0)
				{
					i--;//�ߺ��� ���ڰ� 0���� ũ�ٸ� �ٽ�
					A = 0;
				}
				else
				{
					user_arr[i - 1] = user_num; //�ߺ����� �ʾҴٸ� �ױ�
				}
			}
		}

		for (int a = 0; a < 6; a++) //��ǻ�� ���ڿ� ����� ���� ���ϱ�
		{
			for (int b = 0; b < 6; b++)				{
				if (user_arr[a] == cum_arr[b])
				{
					B++; //�� ���� ����� ��� ���ϱ�
				}
			}
		}

		break;
	}
	cout << "��÷��ȣ ����!" << endl;
	for (int c : cum_arr)
	{
		cout << c << "  ";
	}
	cout << endl;
	cout << "1~7����� ����� ���� �� �ֽ��ϴ�." << endl;
	cout << "���:" << 7-B << "���Դϴ�!" << endl;

	return 0;
}