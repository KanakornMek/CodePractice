#include <stdio.h>

int main()
{
    char str[200];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if('a' <= str[i] && str[i] <= 'z')
        {
            if(str[i] + 3 >= 'z')
            {
                printf("%c",str[i]+2-'z'+'a');
            }
            else
            {
                printf("%c",str[i]+3);
            }
        }
    }
    return 0;
}