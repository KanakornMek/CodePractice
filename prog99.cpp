#include <stdio.h>

int main()
{
    int range1, range2;
    scanf("%d %d", &range1, &range2);
    for(int num = range1; num <= range2; num++)
    {
        int count = 0;
        for(int j = 2; j <= num/2; j++)
        {
            if(num % j == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && num != 1)
            printf("%d ",num);
    }
    
    return 0;
}


// 30 -> ,2,3,5||,6,10,15,
