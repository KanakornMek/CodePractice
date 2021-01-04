#include <stdio.h>

int main()
{
    for(int i = 1; i <= 7; i++)
    {
        if(i % 2 != 0)
        {
            for(int j = i; j <= 7; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("Blank Line");
        }
        printf("\n");
    }
}