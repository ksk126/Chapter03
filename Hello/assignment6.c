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
	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf",&m);

	double result = Compute(m);

	printf("%.2lf �������� = %.2lf ��", m, result);
	return;
}

double Compute(int x)
{
	double result = x * a;
	return result;
}