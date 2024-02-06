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
		std::cout << "\t\t"; std::cout << "    ▦▦        ▦       ▦         ▦      ▦▦▦▦   ▦    ▦▦▦▦▦▦▦▦   \n";
		std::cout << "\t\t"; std::cout << "  ▦    ▦  ▦▦▦       ▦         ▦            ▦   ▦           ▦          \n";
		std::cout << "\t\t"; std::cout << "  ▦    ▦      ▦       ▦         ▦      ▦▦▦▦   ▦           ▦          \n";
		std::cout << "\t\t"; std::cout << "    ▦▦    ▦▦▦       ▦         ▦▦▦        ▦   ▦         ▦  ▦        \n";
		std::cout << "\t\t"; std::cout << "                ▦      ▦ ▦       ▦            ▦   ▦       ▦      ▦      \n";
		std::cout << "\t\t"; std::cout << "        ▦▦▦▦▦     ▦   ▦      ▦     ▦▦▦▦▦▦▦     ▦          ▦    \n";
		std::cout << "\t\t"; std::cout << "                ▦    ▦     ▦     ▦           ▦    ▦   ▦              ▦  \n";
		std::cout << "\t\t"; std::cout << "                ▦   ▦       ▦    ▦           ▦    ▦                       \n";
		std::cout << "\t\t"; std::cout << "                ▦  ▦         ▦   ▦           ▦    ▦  ▦▦▦▦▦▦▦▦▦▦ \n";
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
	int x; int y; // x: 가로 y : 세로
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
				if (table[i][j] == 1) std::cout << "▦";
				else std::cout << "  ";
			}
			std::cout << '\n';
		}
	}
};


int main()
{

	system("mode con cols = 100 lines = 100 | title 테트리스 게임");
	GameTable gt(TABLE_X, TABLE_Y);
	MainMenu();
	gt.DrawGameTable();
	getchar();




	int num;
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







	return 0;
}