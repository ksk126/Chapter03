/* ���ϸ�: assignment-01.c
* ����: PA01. ������ ���� ����ϴ� ���α׷��� �ۼ�, ��, printf ���� �ѹ��� �ۼ�
* �ۼ���: �����
* ��¥: 2025.4.3
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();
int ExtentCompute(int x, int y);
int RoundCompute(int x, int y);

int main()
{
	Main();
	return 0;
}

void Main()
{
	int nx, ny;

	printf("������ ����? ");
	scanf("%d", &nx);
	printf("������ ����? ");
	scanf("%d", &ny);

	int extent=ExtentCompute(nx, ny);
	int round=RoundCompute(nx, ny);

	printf("���簢���� ����: %d\n���簢���� �ѷ�: %d", extent, round);
	return;
}

int ExtentCompute(int x, int y)
{
	int extent = x * y;
	return extent;
}

int RoundCompute(int x, int y)
{
	int round = 2 * (x + y);
	return round;
}
