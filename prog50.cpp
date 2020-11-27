#include <stdio.h>

int main()
{
    int A[5], B[5], AB[5], i;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &B[i]);
        AB[i] = A[i] + B[i];
        printf("%d ", AB[i]);
    }

    return 0;
}