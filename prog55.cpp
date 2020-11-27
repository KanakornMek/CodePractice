#include <stdio.h>

int addFunc(int a, int b)
{
    return a + b;
}
int main()
{
    int a , b;
    scanf("%d%d",&a, &b);
    printf("%d", addFunc(a,b));
    return 0;
}