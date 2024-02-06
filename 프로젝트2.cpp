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

		cout << "���� �ܾ �Է��ϼ���." << endl;
		cin >> input;

		clock_t endTime = clock();
		timer = (endTime - starTime) / CLOCKS_PER_SEC;

		if (timer > 30)
		{
			cout << endl << "������ �����մϴ�.\n" << "�� �Է��� �ܾ� ���� :" << count;
			break;
		}
		else if (output.find(input) != string::npos)
		{
			cout << "�ߺ��� �Է��Դϴ�." << endl;
		}
		else if (input[0] == output[n - 1])
		{
			output += "->" + input;
			count++;
			cout << endl;
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�." << endl;
		}
		cout << "����� �ð�:" << timer << endl << endl;
	}
	
	return 0;
}

