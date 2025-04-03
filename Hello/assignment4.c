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