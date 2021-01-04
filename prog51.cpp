#include <stdio.h>

int main()
{
    int a[5], b[5], sumA = 0, sumB = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sumA += a[i];
    }
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
        sumB += b[i];
    }
    if(sumA < sumB)
        printf("%.2f -> B", sumB/5.);
    else
        printf("%.2f -> A", sumA/5.);

    return 0;
}