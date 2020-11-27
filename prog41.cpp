#include <stdio.h>

using namespace std;

int main()
{
    for(int i = 1; i <= 6; i++)
    {
        for(int a = 1; a <= i; a++)
        {
            printf("%d ", i * a);
        }
        printf("\n");
    }
}