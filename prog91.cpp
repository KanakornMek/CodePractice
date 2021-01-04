#include <stdio.h>
#include <cmath>

int main()
{
    int x1, y1, x2, y2;
    double d , x , y;

    scanf("%d %d %d %d",&x1 , &y1, &x2, &y2);

    x = x1 - x2;
    y = y1 - y2;
    d = sqrt(x*x + y*y);
    printf("%lf", d);
    return 0;
}