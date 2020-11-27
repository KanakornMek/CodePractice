#include <stdio.h>

char toUpperCase(char c)
{
    if(c >= 'a' && c <= 'z') 
        c = c- 32;
    return c;
}


int main()
{
    char i;
    scanf(" %c",&i);
    printf("%c",toUpperCase(i));
    return 0;
}