#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    for(int i = len -1; i >= 0 ;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}