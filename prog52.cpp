#include <stdio.h>

int main()
{
    int a[9]={1, 23, 10, 15,17,21,44,43,53};
    int prime = 2;

    for(int i = 0; i < 9; i++)
    {
        int count = 0;
        for(int j = 2; j <= a[i]-1; j++)
        {
            if(a[i] % j == 0)
            {
                count++;
            }
        }
        if(a[i] < 2)
            count = 1;
        if(count == 0)
        {
            printf("%d is prime number, index: %d\n",a[i],i);
        }
    }
    return 0;
}