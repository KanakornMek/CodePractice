#include <stdio.h>

struct Tennisball
{
    char color[50];
    double weight;
};

int main()
{
    Tennisball MyBall;
    scanf("%s",MyBall.color);
    scanf("%lf",&MyBall.weight);
    Tennisball* ptr = &MyBall;
    printf("%s\n", (*ptr).color);
    printf("%f\n", ptr -> weight);
}