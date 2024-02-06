#include <iostream>

using namespace std;

//1. 생성자 내에서
//2. 초기화 리스트
//3. c++11 문법

// class가 포함되어 있지 않다면 다 똑같음.

// python 무비의 개수 movie각각의 관람객과, 타이틀은 달랐어요 공통적으로 갖고있는 변수가 있었음 영화 몇개냐?


int factorial(int x)
{
	int result = 0;
	if (x <= 1)
	{
		return 1;
	}
	result = x * factorial(x - 1);
	return result;
}

//지역변수(새롭게 정의 될 변수들)<- 반환 주소값(리턴 될 값이 저장되는 주소)<- 매개변수 이런식으로 스택이 쌓여감

//static : ex) 마린 공업하면 모든 마린에게 업된 공격력을 부여함   Marine::attackstatic(value); 
//static : 설계도 상으로 존재, 내부에서만 그 값을 유지하고 싶을 때
int main()
{
	
	
			






	return 0;
}