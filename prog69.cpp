#include <stdio.h>

int main()
{
    char str[200];
    scanf("%s", str);
    for(int i = 0; str[i];i++)
    {
        if('a' <= str[i] && str[i] <= 'z')
        {
            printf("%c",str[i]-' ');
        }
        if('A' <= str[i] && str[i] <= 'Z')
        {
            printf("%c",str[i]+' ');
        }
    }
    return 0;
}