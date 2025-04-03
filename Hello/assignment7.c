/* 파일명: assignment-01.c
* 내용: PA01. 다음과 같이 출력하는 프로그램을 작성, 단, printf 문은 한번만 작성
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double Compute2(float x);
double Compute3(float x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double Float;
	printf("실수? ");
	scanf("%lf", &Float);

	double squared = Compute2(Float);
	double cubed = Compute3(Float);

	printf("제곱: %e\n세제곱: %e", squared, cubed);
	return;
}

double Compute2(float x)
{
	double squared = x * x;
	return squared;
}

double Compute3(float x)
{
	double cubed = x * x * x;
	return cubed;
}