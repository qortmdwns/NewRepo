#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

#define TABLE_X 20
#define TABLE_Y 20

using namespace std;

class MainMenu
{
public:
	MainMenu()
	{
		std::cout << "\n\n\n\n";
		std::cout << "\t\t"; std::cout << "    �ˢ�        ��       ��         ��      �ˢˢˢ�   ��    �ˢˢˢˢˢˢˢ�   \n";
		std::cout << "\t\t"; std::cout << "  ��    ��  �ˢˢ�       ��         ��            ��   ��           ��          \n";
		std::cout << "\t\t"; std::cout << "  ��    ��      ��       ��         ��      �ˢˢˢ�   ��           ��          \n";
		std::cout << "\t\t"; std::cout << "    �ˢ�    �ˢˢ�       ��         �ˢˢ�        ��   ��         ��  ��        \n";
		std::cout << "\t\t"; std::cout << "                ��      �� ��       ��            ��   ��       ��      ��      \n";
		std::cout << "\t\t"; std::cout << "        �ˢˢˢˢ�     ��   ��      ��     �ˢˢˢˢˢˢ�     ��          ��    \n";
		std::cout << "\t\t"; std::cout << "                ��    ��     ��     ��           ��    ��   ��              ��  \n";
		std::cout << "\t\t"; std::cout << "                ��   ��       ��    ��           ��    ��                       \n";
		std::cout << "\t\t"; std::cout << "                ��  ��         ��   ��           ��    ��  �ˢˢˢˢˢˢˢˢˢ� \n";
		std::cout << "\t\t"; std::cout << "						Press Any ket to start...				                   \n";
		std::cout << "\t\t"; std::cout << "						TetrisGame 1.0							                   \n";
		std::cout << "\t\t"; std::cout << "\n";
		getchar(); // any key press
		system("cls");
	}
};

class GameTable
{
private:
	int x; int y; // x: ���� y : ����
	std::vector<std::vector<int>> table;

public:
	GameTable(int x, int y)
	{
		this->x = x;
		this->y = y;
		for (int i = 0; i < y; i++)
		{
			std::vector<int> temp;
			for (int j = 0; j < x; j++)
			{
				temp.push_back(0);
			}
			table.push_back(temp);
		}
		for (int i = 0; i < x; i++)
		{
			table[0][i] = 1;
			table[y - 1][i] = 1;
		}
		for (int i = 0; i < y - 1; i++)
		{
			table[i][0] = 1;
			table[i][x - 1] = 1;
		}
	}
	void DrawGameTable()
	{
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				if (table[i][j] == 1) std::cout << "��";
				else std::cout << "  ";
			}
			std::cout << '\n';
		}
	}
};


int main()
{

	system("mode con cols = 100 lines = 100 | title ��Ʈ���� ����");
	GameTable gt(TABLE_X, TABLE_Y);
	MainMenu();
	gt.DrawGameTable();
	getchar();




	int num;
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







	return 0;
}