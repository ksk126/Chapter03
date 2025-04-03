/* 파일명: assignment-01.c
* 내용: PA01. 다음과 같이 출력하는 프로그램을 작성, 단, printf 문은 한번만 작성
* 작성자: 김수경
* 날짜: 2025.4.3
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
double Compute(int n, int M);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double N, m;

	printf("힘(N)? ");
	scanf("%lf", &N);
	printf("이동거리(m)? ");
	scanf("%lf", &m);

	double J = Compute(N, m);

	printf("%.2lf J", J);
	return;
}

double Compute(int n, int M)
{
	double J = n * M;
	return J;
}