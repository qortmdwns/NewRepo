#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
//little endian�� ���Ͱ� �� �б� ���� ����?, ���̽㿡�� swap���� 
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    /*int x;
    int y = 0;
    std::cout << "�л� ��";
    std::cin >> x;
    int* num = new int[x];
    for (int i = 0; i < x; i++)
    {
        std::cout << x <<"�� �л��� ������ �Է��ϼ���:";
        std::cin >> num[i];
        y += num[i];

    } std::cout << y / x << "\n";*/

    /*int a = 10;
    int b = 20;
    swap(&a, &b);
    std::cout << a<<","<<b<<"\n";*/

    /*int x;
    int y;
    std::cout << "���ڸ� �Է��ϼ���:";
    std::cin >> x;
    std::cout << "���ڸ� �Է��ϼ���:";
    std::cin >> y;
    while (x <= 0 || y <= 0)
    {
        std::cout << "x�� y��� ����� �Է����ּ���.\n";
        std::cout << "���ڸ� �Է��ϼ���:";
        std::cin >> x;
        std::cout << "���ڸ� �Է��ϼ���:";
        std::cin >> y;
    }
    std::vector<int> arr(x);
  
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr.insert(arr.begin() + i + j, i * y + j + 1);
            std::cout << std::setw(3) << arr[i + j];
        }
        std::cout << std::endl;
    }*/
    
    /*std::vector<int> myVector = {10,20,30,20,40,10,50};

    std::sort(myVector.begin(), myVector.end());
    for (int num : myVector)
        std::cout << num << "\n";

    std::cout << "--------------------------------\n";
    myVector.erase(std::unique(myVector.begin(), myVector.end()), myVector.end());


    for (int num : myVector)
        std::cout << num << "\n";*/

    /*int x;
    int y;
    std::cout << "��� ���� ���� �Է��ϼ���:";
    std::cin >> x;
    std::cin >> y;
    std::cout << "��� ���Ҹ� �Է��ϼ���:";
    std::vector<std::vector<int>> v(x, std::vector<int>(y));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cin >> v[i][j];
        }
    }
    //���� ��
    int num = 0;
    std::cout << "�� ���� ��:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            num += v[i][j];
        }std::cout << num<<"\n";
        num = 0;
    }
    //���� ��
    int numY = 0;
    std::cout << "�� ���� ��:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            numY += v[j][i];
        }std::cout << numY << "\n";
        numY = 0;
    }*/
    //����5�� ���� ����
    /*int a;
    std::vector<int> arr;
    std::cout << "���� 5��";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> a;
        arr.push_back(a);
    }
    //���� ũ��
    std::cout << arr.size()<<"\n";
    //���� ��� ���� ���
    for (int i:arr)
    {
        std::cout << i << "\n";
    }
    //���� ū ��
    int max_arr;
    for (int i = 0; i < arr.size(); i++) {
        if (i == 0) {
            max_arr = arr[i];
        }
        else if (arr[i] > max_arr) {
            max_arr = arr[i];
        }
    }std::cout << max_arr << "\n";
    //���� ��� ���� �ι�
    for (int i : arr)
    {
        std::cout << i * 2 << "\n";
    }
    //�ε��� �Է� �޾� �ش� �ε��� ���� ����
    int num;
    std::cout << "���� �ε��� �Է�";
    std::cin >> num;
    arr.erase(arr.begin() + num);
    for (int i : arr)
    {
        std::cout << i << "\n";
    }
    //�ε��� �Է� �޾� �ش� �ε����� ���� ����
    int n;
    int p;
    std::cout << "���� �ε��� �Է�";
    std::cin >> n;
    std::cout << "���� ���� �Է�";
    std::cin >> p;
    arr.insert(arr.begin() + n, p);
    for (int i : arr)
    {
        std::cout << i << "\n";
    }*/
}   