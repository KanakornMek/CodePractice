#include <stdio.h>

using namespace std;

int main()
{
    int N, a = 0, b = 1, sum;
    scanf("%d", &N);
    while(a < N)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
}