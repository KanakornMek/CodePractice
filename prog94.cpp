#include <stdio.h>

int main()
{
    int a,count = 0;
    scanf("%d", &a);
    while(a > 1)
    {
        a = a / 2;
        count++;
    }
    printf("%d",count);

    return 0;
}