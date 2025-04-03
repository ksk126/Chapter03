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

    printf("질량(kg)? ");
    scanf("%lf", &kg);
    printf("높이(m)? ");
    scanf("%lf", &m);

    double energy = calcPositionEnergy(kg, m);

    printf("위치 에너지: %lf\n J", energy);
    return;
}

double calcPositionEnergy(double weight, double height)
{
    double energy = weight * height * 9.8;
    return energy;
}
