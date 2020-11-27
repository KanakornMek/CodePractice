#include <stdio.h>

int main()
{
    int a[5], i = 0, sumo = 0, sume = 0;
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);//a, a+1, a+2, a+3, a+4
    while(i <= 4)
    {
        if(a[i] % 2 == 0)
            sume += a[i];
        else
        {
            sumo += a[i];
        }  
        i++;
    }
    printf("Values in array: %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
    printf("Sum of even value: %d\n", sume);
    printf("Sum of odd value: %d", sumo);
    return 0;
}