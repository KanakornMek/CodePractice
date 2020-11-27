#include <stdio.h>

int main()
{
    int a;
    for(int i = 1; i <= 3; i++)
    {
        for(int b = 0; b < i-1; b++)
        {
            printf(" ");
        }
        for(int j = 5; j >= i * 2 - 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 2; i >= 1; i--)
    {
        for(int b = 0; b < i-1; b++)
        {
            printf(" ");
        }
        for(int j = 5; j >= i * 2 - 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}