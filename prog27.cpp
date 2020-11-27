#include <stdio.h>

using namespace std;

int main()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int a =1; a <= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}