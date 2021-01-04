#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0)
        printf("First Quadrant");
    if(x > 0 && y < 0)
        printf("Fourth Quadrant");
    if(x < 0 && y > 0)
        printf("Second Quadrant");
    if(x < 0 && y < 0)
        printf("Third Quadrant");
    if(x == 0 && y != 0)
        printf("Be in Axis");
    if(x != 0 && y == 0)
        printf("Be in Axis");
    if(x == 0 && x == y)
        printf("Center");

    return 0;
}