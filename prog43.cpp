#include <stdio.h>

using namespace std;

int main()
{
    int a[10];
    int sum =0;
    for(int i=0; i <=9 ; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d", sum);

}