#include <stdio.h>

int main()
{
    char s[50];
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; ++i)
        printf("%c\n", s[i]);

    return 0;
}