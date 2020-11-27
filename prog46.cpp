#include <stdio.h>


int main()
{
    int a[5];
    int i = 0;
    while(i <= 4)
    {
        scanf("%d",&a[i]);
        i++;
    }
    int counter=0;
    i = 0;
    while(i <= 4)
    {
        if(a[i] >= 100)
            counter++;
        i++;
    }
    printf("%d",counter);
    return 0;
}