#include <stdio.h>

void findMax(long long a, long long b , long long c)
{
    long long max; 
    if(a > b)
        max = a;
    else
        max = b;
    if(c > max)
        max = c;
    printf("Maximum Number: %lld", max);
}

int main()
{
    long long a,b,c;
    scanf("%lld%lld%lld", &a, &b, &c);
    findMax(a , b , c);
}