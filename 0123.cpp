#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
//little endian이 컴터가 더 읽기 쉬운 이유?, 파이썬에서 swap구현 
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
    std::cout << "학생 수";
    std::cin >> x;
    int* num = new int[x];
    for (int i = 0; i < x; i++)
    {
        std::cout << x <<"번 학생의 성적을 입력하세요:";
        std::cin >> num[i];
        y += num[i];

    } std::cout << y / x << "\n";*/

    /*int a = 10;
    int b = 20;
    swap(&a, &b);
    std::cout << a<<","<<b<<"\n";*/

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
    std::cout << "행과 열의 수를 입력하세요:";
    std::cin >> x;
    std::cin >> y;
    std::cout << "행렬 원소를 입력하세요:";
    std::vector<std::vector<int>> v(x, std::vector<int>(y));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cin >> v[i][j];
        }
    }
    //행의 합
    int num = 0;
    std::cout << "각 행의 합:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            num += v[i][j];
        }std::cout << num<<"\n";
        num = 0;
    }
    //열의 합
    int numY = 0;
    std::cout << "각 열의 합:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            numY += v[j][i];
        }std::cout << numY << "\n";
        numY = 0;
    }*/
    //정수5개 받은 백터
    /*int a;
    std::vector<int> arr;
    std::cout << "정수 5개";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> a;
        arr.push_back(a);
    }
    //백터 크기
    std::cout << arr.size()<<"\n";
    //백터 모든 원소 출력
    for (int i:arr)
    {
        std::cout << i << "\n";
    }
    //가장 큰 값
    int max_arr;
    for (int i = 0; i < arr.size(); i++) {
        if (i == 0) {
            max_arr = arr[i];
        }
        else if (arr[i] > max_arr) {
            max_arr = arr[i];
        }
    }std::cout << max_arr << "\n";
    //백터 모든 원소 두배
    for (int i : arr)
    {
        std::cout << i * 2 << "\n";
    }
    //인덱스 입력 받아 해당 인덱스 원소 제거
    int num;
    std::cout << "제거 인덱스 입력";
    std::cin >> num;
    arr.erase(arr.begin() + num);
    for (int i : arr)
    {
        std::cout << i << "\n";
    }
    //인덱스 입력 받아 해당 인덱스에 원소 삽입
    int n;
    int p;
    std::cout << "삽입 인덱스 입력";
    std::cin >> n;
    std::cout << "삽입 원소 입력";
    std::cin >> p;
    arr.insert(arr.begin() + n, p);
    for (int i : arr)
    {
        std::cout << i << "\n";
    }*/
}   