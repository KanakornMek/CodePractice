#include <stdio.h>

using namespace std;

int main()
{
    int i = 0;
    while(1)
    {
        scanf("%d", &i);
        if(i == -1)
            break;
        for( ; i >= -32 ; i--)
        {
            printf("%d ", i);
        }
        for( ; i <= -32 ; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}