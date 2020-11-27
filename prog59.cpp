#include <stdio.h>

double dollartoBDT(double a)
{
    return a*78.55;
}

int main()
{
    double i;
    scanf("%lf",&i);
    printf("%.2f Taka",dollartoBDT(i));
    return 0;
}