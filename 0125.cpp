#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <list>
#include <string>

namespace seoul
{
	std::string num = "02";
	std::string l_m = "63����";
}
namespace busan
{
	std::string num = "051";
	std::string l_m = "�ؿ��";
}

using namespace busan;

using namespace std;

struct Rectangle
{
	double width;
	double height;
};


int main()
{
	/*std::cout << "������ ������ȣ��:" << seoul::num << "\n";
	std::cout << "������ ���帶ũ��:" << seoul::l_m << "\n";
	std::cout << "�λ��� ������ȣ��:" << num << "\n";
	std::cout << "�λ��� ���帶ũ��:" << l_m << "\n";*/

	/*std::list<int> myList = {5,4,3,4,2,1,1};
	std::list<int> myList_67 = {6,7};
	std::list<int> myList_0 = {0};
	int A = 0;
	for (int i : myList)
	{
		if (i == 4)
		{
			A++;
		}
	}std::cout << A << "\n";
	myList.sort();
	for (int i : myList)
	{
		std::cout << i ;
	}std::cout << "\n";
	myList.unique();
	for (int i : myList)
	{
		std::cout << i ;
	}std::cout << "\n";

	//myList.push_back(6);
	//myList.push_back(7);
	myList.splice(myList.end(), myList_67);
	for (int i : myList)
	{
		std::cout << i;
	}std::cout <<"\n";
	myList.splice(myList.begin(), myList_0);
	//myList.push_front(0);
	for (int i : myList)
	{
		std::cout << i;
	}std::cout <<"\n";*/
	
	/*std::string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
	std::cout << "s���ڿ��� ���̴�:"<< s.length() << "\n";
	std::cout << "100��° ���ڴ�:" << s.at(100) << "\n";
	std::cout << "two��� ���ڰ� ó�� ���� �ε�����:" << s.find("two") << "\n";
	std::cout << "two��� ���ڰ� �� ��° ���� �ε�����:" << s.find("two",12) << "\n";
	//2��° �ǽ�
	std::string str;
	std::string str_1;
	std::string str_2;
	int Str;
	std::cout << "���ڿ� �Է�";
	std::cin >> str_1;
	std::cout << "���ڿ� �Է�";
	std::cin >> str_2;
	while (true)
	{
		std::cin >> str_1 >> str_2;
		for (int i = 0; i < str_1.size(); i++)
		{
			if (isdigit(str_1[i]) != 0)
			{
				break;
			}
		}

		for (int i = 0; i < str_2.size(); i++)
		{
			if (isdigit(str_2[i]) != 0)
			{
				break;
			}
		}
	}
	
	str = str_1;
	std::cout << str.append(str_2) << "\n";
	
	Str = (stoi(str_1) + stoi(str_2));
	std::cout << std::to_string(Str) << "\n";*/
	//3��° �ǽ�
	std::string s = { "Codingon"};
	s[0] = tolower(s[0]);
	std::cout << s <<"\n";
	std::cout << s.substr(2, 4) << "\n";
	std::cout << s.replace(2, 4, "oooo") << "\n";
	std::cout << s.erase(2, 5) << "\n";
	
	/*Rectangle R;
	cout << "���� ���θ� �Է��ϼ���:" << "\n";
	cin >> R.width >> R.height;
	cout << "�簢���� ���̴�:" << (R.width * R.height);*/

	//���۷��� : ���̴� ������ �Ϲ� ������ �Ȱ�����, �ȿ��� �Ͼ�� ���� �����Ͷ� �Ȱ���, �� �� �̸��� �ݵ�� �ʿ�


	return 0;
}