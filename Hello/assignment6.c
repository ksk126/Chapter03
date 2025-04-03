#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define a 0.3025

void Main();
double Compute(int x);

int main()
{
	Main();
	return 0;
}

void Main()
{
	double m;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf",&m);

	double result = Compute(m);

	printf("%.2lf 제곱미터 = %.2lf 평", m, result);
	return;
}

double Compute(int x)
{
	double result = x * a;
	return result;
}