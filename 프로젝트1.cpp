#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


//input ���� 1���� ���� output ���� input+1���� ����
//��ǻ�ʹ� 1~3�� �ڵ����� input�� ����
//������ 1~3���� �����ϰ� 1�� ������ ���� �� ���ڿ� 1�� 3�� ������ 3�� ���ؼ� ���� ���� ���� �θ� �� �ְ� 
//������ ���� 31�� �Ǹ� false�� �ǰ� ������ ������(while�� ����ϴ°� ������?)
//���� �Լ� ���� ���� ����� ���� �Լ��� �����غ���
//1. 1���� 3���� ����ڰ� ���� �ֱ�, 1���� 3���� ��ǻ�Ͱ� �������� ���� �ֱ�
//���� �Լ������� 1���� 3���� ���ڸ� �ְ� 31������ �����ϰ� �����߱�


int main()
{
	
	int input = 0;
	srand(time(NULL));
	int user_num = 0;

	while (1)
	{
		int randdom_num = rand();
		int cum_num = randdom_num % 3+1;

		cout << "������ �Է��ϼ��� :" << endl;
		cin >> user_num;
		
		if (user_num > 3)
		{
			cout << "1~3������ ���� �Է����ּ���." << endl;
			cin >> user_num;
			if (user_num > 3)
			{
				break;
			}
		}
		else
		{
			cout << "����ڰ� �θ� ����:" << endl;
			for (int i = 0; i < user_num; i++)
			{
				input += 1;
				cout << input << endl;
				if (input > 30)
				{
					cout << "���� ���� ��ǻ���� �¸��Դϴ�." << endl;
					break;
				}
			}
		}

		if (input > 30)
		{
			break;
		}

		cout << "��ǻ�Ͱ� �θ� ����:" << endl;
		for (int j = 0; j < cum_num; j++)
		{
			input += 1;
			cout << input << endl;
			if (input > 30)
			{
				cout << "���� ���� ������� �¸��Դϴ�." << endl;
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