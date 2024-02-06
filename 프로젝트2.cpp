#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	clock_t starTime = clock();

	string input = "airplane";
	string output = "airplane";
	int n = 0;
	int timer = 0;
	int count = 0;

	while (1)
	{
		n = output.size();
		cout << output << endl;

		cout << "다음 단어를 입력하세요." << endl;
		cin >> input;

		clock_t endTime = clock();
		timer = (endTime - starTime) / CLOCKS_PER_SEC;

		if (timer > 30)
		{
			cout << endl << "게임을 종료합니다.\n" << "총 입력한 단어 개수 :" << count;
			break;
		}
		else if (output.find(input) != string::npos)
		{
			cout << "중복된 입력입니다." << endl;
		}
		else if (input[0] == output[n - 1])
		{
			output += "->" + input;
			count++;
			cout << endl;
		}
		else
		{
			cout << "잘못된 입력입니다." << endl;
		}
		cout << "경과한 시간:" << timer << endl << endl;
	}
	
	return 0;
}

