#include <stdio.h>

int main()
{
    int a,b;
    long long FacA = 1, FacB = 1;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 1; i <= a; i++)
    {
        FacA = FacA * i;
    }
    for(int i = 1; i <= b; i++)
    {
        FacB = FacB * i;
    }
    printf("%lld", FacA + FacB);
    return 0;
}