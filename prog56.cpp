#include <stdio.h>
#include <algorithm>

using namespace std;

void factor(long long a)
{
    long long x[100];
    for(int j = 0; j < 100; j+=2)
    {
        for(long long i = 1; i*i <= a; i++)
        {

            if(a % i == 0)
            {
                if(i != a/i)
                {
                    printf("%lld %lld ", i, a/i);
                        x[j] = i;
                        x[j + 1] = a/i; 
                }
                else
                {
                    printf("%lld",i);
                    x[j] = i;
                    j--;
                }
            }
        }
    }
    sort(&x[0], &x[99]);
}
int main()
{
    long long i;
    scanf("%lld", &i);
    factor(i);
    return 0;
}

