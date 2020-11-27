#include <stdio.h>

int main()
{
    int a[3][3];
    int sum  = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
            while(i =  j)
            {
                sum += a[i][j]
            }

        }
    }

    
    printf("%.2f",sum/9.);
}