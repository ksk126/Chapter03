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

	printf("��(N)? ");
	scanf("%lf", &N);
	printf("�̵��Ÿ�(m)? ");
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