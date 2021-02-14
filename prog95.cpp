#include <stdio.h>

int main()
{
    int input, collect;
    scanf("%d", &input);

    for(int i = 31; i >= 0; i--)
    {
        
        collect = input >> i;

        if(collect & 1)
        {
            printf("1");
        }
        else    
        {
            printf("0");
        }

        if(i % 4 == 0)
        {
            printf(" ");
        }
    }
    return 0;
}