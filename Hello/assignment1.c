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