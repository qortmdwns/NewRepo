#include "star.h"
#include "Snack_Candy.h"
#include "Snack_Chocolate.h"


//�Ͻ��� : implict
//����� : explicit
//���̽��� ������ �÷��Ϳ� ���Ͽ� �ڵ����� �޸𸮸� �Ҵ��ϰų� ������Ű�� ����(�޸� ����)


int main()
{
	Snack* basket[5]{};
	int order[5]{};
	string taste;
	string shape;
	int index = 0;
	int now = 0;
	do
	{
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ� ( 1:����, 2:���ݸ�,0: ���� ) :";
		cin >> now;
		if (now == 1)
		{
			cout << "���� �Է��ϼ���. :" << endl;
			cin >> taste;
			basket[index] = new Candy(taste);
			Snack::snack_num_plus();
			order[index] = now;
			index++;
		}
		else if (now == 2)
		{
			cout << "����� �Է��ϼ���. :" << endl;
			cin >> shape;
			basket[index] = new Chocolate(shape);
			Snack::snack_num_plus();
			order[index] = now;

			index++;

		}
		else if (now == 0)
		{
			break;
		}
		else
			cout << "0~2 ������ ���ڸ� �Է��ϼ���." << endl;

	} while (1);

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::snack_count() << " �� �Դϴ�.\n";



	cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�! \n";
	for (int i = 0; i < index; i++)
	{
		if (order[i] == 1)
		{
			Candy* candy = (Candy*)basket[i];
			cout << candy->_taste << "�� ����\n";
		}
		else if (order[i] == 2)
		{
			Chocolate* choco = (Chocolate*)basket[i];
			cout << choco->_shape << "��� ���ݸ�\n";
		}
		else continue;
	}
	{

	}

	for (Snack* i : basket)
	{
		delete i;
	}
	

	return 0;
}













