/* ���ϸ�: assignment-03.c
* ����: PA03. ������ ���̸� �Է¹޾� ��ġ�������� ���ϴ� ���α׷� �ۼ��ϱ�.
������ kg����, ���̴� m������ �Է¹��� ��.
* �ۼ���: �����
* ��¥: 2025.4.3
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0303();
double calcPositionEnergy(double weight, double height);

int main()
{
    assignment0303();
    return 0;
}

void assignment0303()
{
    double m, kg;

    printf("����(kg)? ");
    scanf("%lf", &kg);
    printf("����(m)? ");
    scanf("%lf", &m);

    double energy = calcPositionEnergy(kg, m);

    printf("��ġ ������: %lf\n J", energy);
    return;
}

double calcPositionEnergy(double weight, double height)
{
    double energy = weight * height * 9.8;
    return energy;
}
