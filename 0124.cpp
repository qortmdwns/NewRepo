// C++ p.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream> //<>�ȿ� �ִ� ���� �ſ� �߿��ϰų� �⺻ �����Ǵ� ���̺귯��

/*int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    if (a > b)
    {
       return a - b;
    }
    else
    {
       return b - a;
    }
}
int mul(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}*/

/*void num(int a)
{
    if (a % 2 == 1)
    {
        std::cout << "Ȧ��\n";
    }
    else
    {
        std::cout << "¦��\n";
    }
}
int max_num(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}*/

int main()//main�Լ��� ���α׷� ���� �� ���� ���� ����� 1���� �־�� ��
{
    /*std::string city2[5] = {"korea", "japan", "china", "usa", "uk"};
    for (std::string ct : city2)
    {
        std::cout << ct << "\n";
    }*/
    /*std::string city2[5];
    std::cout << "���� �Է�";
    std::cin >> city2[0];
    std::cout << "���� �Է�";
    std::cin >> city2[1];
    std::cout << "���� �Է�";
    std::cin >> city2[2];
    std::cout << "���� �Է�";
    std::cin >> city2[3];
    std::cout << "���� �Է�";
    std::cin >> city2[4];

    for (std::string ct : city2)
    {
        std::cout << ct << "\n";
    }*/

    /*int grade[5];
    std::cout << "����";
    std::cin >> grade[0];
    std::cout << "����";
    std::cin >> grade[1];
    std::cout << "����";
    std::cin >> grade[2];
    std::cout << "����";
    std::cin >> grade[3];
    std::cout << "����";
    std::cin >> grade[4];
    int A = 0;
    for (int i = 0; i < sizeof(grade) / sizeof(grade[0]); i++)
        {
        A += grade[i];
        }
    std::cout << A / 5 << "\n";*/

    /*num(3);
    std::cout << max_num(10, 20, 8) << "\n";*/
    /*std::cout << add(2, 9) << "\n";
    std::cout << sub(2, 9) << "\n";
    std::cout << mul(2, 9) << "\n";
    std::cout << (int)divide(9, 2) << "\n";*/
    /*std::string user_name;
    std::cout << "�̸��� �Է��ϼ���.\n";
    std::cin >> user_name;

    int user_age;
    std::cout << "���̸� �Է��ϼ���.\n";
    std::cin >> user_age;

    std::cout << "�ȳ��ϼ���!" + user_name + "��" << user_age << "��";

    return 0;

    int p_age;
    std::cout << "���̸� �Է��ϼ���.\n";
    std::cin >> p_age;

    if (1 <= p_age && p_age <= 7) {
        std::cout << "����";
    }
    else if (8 <= p_age && p_age <= 13) {
        std::cout << "�ʵ��л�";
    }
    else if (14 <= p_age && p_age <= 16) {
        std::cout << "���л�";
    }
    else if (17 <= p_age && p_age <= 19) {
        std::cout << "����л�";
    }
    else if (20 <= p_age && p_age <= 199) {
        std::cout << "����";
    }
    else {
        std::cout << "���̰� �ʹ� �����ϴ�.";
    }
    return 0;

    std::string p_name;
    std::cout << "�̸��� �Է��ϼ���.\n";
    std::cin >> p_name;

    if (p_name == "ȫ�浿") {
        std::cout << "����";
    }
    else if (p_name == "������") {
        std::cout << "����";
    }
    else {
        std::cout << "�𸣰ھ��.";
    }
    int u_age;
    std::cout << "���ڸ� �Է��ϼ���.\n";
    std::cin >> u_age;

    u_age % 5 == 0 ? std::cout << "5�� ����Դϴ�." : std::cout << "5�� ����� �ƴϳ׿�̤�";*/

    /*int i = 0;
    for (i == 0; i <= 5; i++) {
        std::cout << "�ݺ�";
    }*/

    /*int i = 1;
    while(i <= 5) {
        std::cout << "�ݺ�\n";
        ++i;
    }*/
    /*int i = 1;
    for (i == 1; i <10; i++) {
        std::cout << "5*" << i << " = " << 5 * i << "\n";
    }*/

    /*int i = 1;
    int j = 1;
    for (i = 2; i < 10; i++) {
        printf("%d�� ���\n", i);
        for (j = 1; j < 10; j++) {
            std::cout << i << "*" << j << "=" << i * j << "\n";
        }
    }*/
    /*int n;
    std::cout << "���ڸ� �Է��ϼ���.\n";
    std::cin >> n;
    int i = 0;
    int num = 0;
    while (i <= n) {
        num += i;
        i++;
    }
     std::cout << num;*/
     /*int i = 1;
     int j = 1;
     int num = 0;
     while (i < 10) {
         while (j < 10) {
         num = i * j;
         std::cout << i << "X" << j << "=" << num << "\n";
         j++;
         }j = 1;
         i++;
     }*/
     /*int n = 1;
     int num = 0;
     while (n != 0) {
         std::cout << "���ڸ� �Է��ϼ���.\n";
         std::cin >> n;
         num = num + n;
     }
     std::cout << num << "\n";*/

     /*int n = 0;
     std::cout << "���ڸ� �Է��ϼ���.\n";
     std::cin >> n;
     for (int i = 1; i <= n; i++) {
         for (int j = 0; j < i; j++) {
             std::cout << "*";
         }
         std::cout << "\n";
     }*/

     // "*" : 1.����, 2. ptr����, 3. �������� �� ��
     /*int a = 3;
     int* ptr = &a;
     std::cout << &a << std::endl;
     std::cout << ptr;*/

     /*int n2 = 0;
     int* arr = new int[n2];
     for (int i = 0; i < n2; i++)
     {
     arr[i] = i + 1;
     }
     delete[] arr;*/

     /*int n3;
     std::cout << "���ڸ� �Է��ϼ���:";
     std::cin >> n3;
     int** arr2 = new int* [n3];
     for (int i = 0; i < n3; i++)
     {
         arr2[i] = new int[n3];
     }
     for (int i = 0; i < n3; i++)
     {
         for (int j = 0; j < n3; j++)
         {
             arr2[i][j] = 0;
         }
     }
     for (int i = 0; i < n3; i++)
     {
         delete[] arr2[i];
     }
     delete[] arr2;*/

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
     int** arr = new int* [x];

     for (int i = 0; i < x; i++)
     {
         arr[i] = new int[y];
     }

     for (int i = 0; i < x; i++)
     {
         for (int j = 0; j < y; j++)
         {
             arr[i][j] = (y * i) + j + 1;
             std::cout << arr[i][j];
         }std::cout << std::endl;
     }*/



}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
