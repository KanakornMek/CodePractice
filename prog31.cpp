#include <stdio.h>

using namespace std;

int main()
{
    for(int i = 4; i >= 1; i--)
    {
        for(int a = i; a >= 1; a--)
        {
            printf("*");
        }
        printf("\n");
    }
}