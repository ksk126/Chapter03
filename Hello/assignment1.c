/* 파일명: assignment-01.c
* 내용: PA01. 다음과 같이 출력하는 프로그램을 작성, 단, printf 문은 한번만 작성
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
int ExtentCompute(int x);
int RoundCompute(int x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	int n;

	printf("한 변의 길이? ");
	scanf("%d", &n);

	int extent=ExtentCompute(n);
	int round = RoundCompute(n);

	printf("정사각형의 넓이: %d\n정사각형의 둘레: %d", extent, round);
	return;
}

int ExtentCompute(int x)
{
	int extent = x * x;
	return extent;
}

int RoundCompute(int x)
{
	int round = x * 4;
	return round;
}