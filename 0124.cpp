// C++ p.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> //<>안에 있는 것은 매우 중요하거나 기본 제공되는 라이브러리

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
        std::cout << "홀수\n";
    }
    else
    {
        std::cout << "짝수\n";
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

int main()//main함수는 프로그램 실행 시 가장 먼저 실행됨 1개만 있어야 됨
{
    /*std::string city2[5] = {"korea", "japan", "china", "usa", "uk"};
    for (std::string ct : city2)
    {
        std::cout << ct << "\n";
    }*/
    /*std::string city2[5];
    std::cout << "나라 입력";
    std::cin >> city2[0];
    std::cout << "나라 입력";
    std::cin >> city2[1];
    std::cout << "나라 입력";
    std::cin >> city2[2];
    std::cout << "나라 입력";
    std::cin >> city2[3];
    std::cout << "나라 입력";
    std::cin >> city2[4];

    for (std::string ct : city2)
    {
        std::cout << ct << "\n";
    }*/

    /*int grade[5];
    std::cout << "점수";
    std::cin >> grade[0];
    std::cout << "점수";
    std::cin >> grade[1];
    std::cout << "점수";
    std::cin >> grade[2];
    std::cout << "점수";
    std::cin >> grade[3];
    std::cout << "점수";
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
    std::cout << "이름을 입력하세요.\n";
    std::cin >> user_name;

    int user_age;
    std::cout << "나이를 입력하세요.\n";
    std::cin >> user_age;

    std::cout << "안녕하세요!" + user_name + "님" << user_age << "세";

    return 0;

    int p_age;
    std::cout << "나이를 입력하세요.\n";
    std::cin >> p_age;

    if (1 <= p_age && p_age <= 7) {
        std::cout << "유아";
    }
    else if (8 <= p_age && p_age <= 13) {
        std::cout << "초등학생";
    }
    else if (14 <= p_age && p_age <= 16) {
        std::cout << "중학생";
    }
    else if (17 <= p_age && p_age <= 19) {
        std::cout << "고등학생";
    }
    else if (20 <= p_age && p_age <= 199) {
        std::cout << "성인";
    }
    else {
        std::cout << "나이가 너무 많습니다.";
    }
    return 0;

    std::string p_name;
    std::cout << "이름을 입력하세요.\n";
    std::cin >> p_name;

    if (p_name == "홍길동") {
        std::cout << "남자";
    }
    else if (p_name == "성춘향") {
        std::cout << "여자";
    }
    else {
        std::cout << "모르겠어요.";
    }
    int u_age;
    std::cout << "숫자를 입력하세요.\n";
    std::cin >> u_age;

    u_age % 5 == 0 ? std::cout << "5의 배수입니다." : std::cout << "5의 배수가 아니네요ㅜㅜ";*/

    /*int i = 0;
    for (i == 0; i <= 5; i++) {
        std::cout << "반복";
    }*/

    /*int i = 1;
    while(i <= 5) {
        std::cout << "반복\n";
        ++i;
    }*/
    /*int i = 1;
    for (i == 1; i <10; i++) {
        std::cout << "5*" << i << " = " << 5 * i << "\n";
    }*/

    /*int i = 1;
    int j = 1;
    for (i = 2; i < 10; i++) {
        printf("%d단 계산\n", i);
        for (j = 1; j < 10; j++) {
            std::cout << i << "*" << j << "=" << i * j << "\n";
        }
    }*/
    /*int n;
    std::cout << "숫자를 입력하세요.\n";
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
         std::cout << "숫자를 입력하세요.\n";
         std::cin >> n;
         num = num + n;
     }
     std::cout << num << "\n";*/

     /*int n = 0;
     std::cout << "숫자를 입력하세요.\n";
     std::cin >> n;
     for (int i = 1; i <= n; i++) {
         for (int j = 0; j < i; j++) {
             std::cout << "*";
         }
         std::cout << "\n";
     }*/

     // "*" : 1.곱셈, 2. ptr선언, 3. 역참조를 할 때
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
     std::cout << "숫자를 입력하세요:";
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
     std::cout << "숫자를 입력하세요:";
     std::cin >> x;
     std::cout << "숫자를 입력하세요:";
     std::cin >> y;
     while (x <= 0 || y <= 0)
     {
     std::cout << "x와 y모두 양수를 입력해주세요.\n";
     std::cout << "숫자를 입력하세요:";
     std::cin >> x;
     std::cout << "숫자를 입력하세요:";
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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
