#include <stdio.h>

int main()
{
    char s[150];
    scanf("%s",s);
    for(char c = 'A'; c <= 'Z';c++)
    {
        int count = 0;
        for(int i = 0; s[i] ; i++)
        {
            if(c == s[i])
                count++;
        }
        if(count != 0)
            printf("%c(%d)",c,count);
    }
    for(char c = 'a'; c <= 'z';c++)
    {
        int count = 0;
        for(int i = 0; s[i] ; i++)
        {
            if(c == s[i])
                count++;
        }
        if(count != 0)
            printf("%c(%d)",c,count);
    }
    return 0;
}