#include <stdio.h>

using namespace std;

int main()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int a = 1; a <= i; a++)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
}