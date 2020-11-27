#include <stdio.h>

double absolute(double a)
{
    if(a < 0.0)
        a = -1 * a;
    return a;
}
int main()
{
    double i;
    scanf("%lf",&i);
    printf("%.2f",absolute(i));
    return 0;
}