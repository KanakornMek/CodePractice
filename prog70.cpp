#include <stdio.h>
#include <string.h>


int main()
{
    char str[200];
    scanf("%[^\n]",str);
    int count = 0;
    int len = strlen(str);
    if(str[len - 1] == ' ')
        count--;
    for(int i = 0; str[i]; i++)
    {
        
        if(str[i] == ' ' && str[i+1] !=' ')
        {
            count++;
        }
    }
    printf("%d",count + 1);
    return 0;
}