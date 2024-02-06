#include "star.h"
#include "Snack_Candy.h"
#include "Snack_Chocolate.h"


//암시적 : implict
//명시적 : explicit
//파이썬은 가비지 컬렉터에 의하여 자동으로 메모리를 할당하거나 삭제시키기 때문(메모리 관리)


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
		cout << "과자 바구니에 추가할 간식을 고르시오 ( 1:사탕, 2:초콜릿,0: 종료 ) :";
		cin >> now;
		if (now == 1)
		{
			cout << "맛을 입력하세요. :" << endl;
			cin >> taste;
			basket[index] = new Candy(taste);
			Snack::snack_num_plus();
			order[index] = now;
			index++;
		}
		else if (now == 2)
		{
			cout << "모양을 입력하세요. :" << endl;
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
			cout << "0~2 사이의 숫자를 입력하세요." << endl;

	} while (1);

	cout << "과자 바구니에 담긴 간식의 갯수는 " << Snack::snack_count() << " 개 입니다.\n";



	cout << "과자 바구니에 담긴 간식 확인하기! \n";
	for (int i = 0; i < index; i++)
	{
		if (order[i] == 1)
		{
			Candy* candy = (Candy*)basket[i];
			cout << candy->_taste << "맛 사탕\n";
		}
		else if (order[i] == 2)
		{
			Chocolate* choco = (Chocolate*)basket[i];
			cout << choco->_shape << "모양 초콜릿\n";
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













