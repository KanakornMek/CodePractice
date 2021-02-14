#include <stdio.h>

int main()
{
    char s[50];
    int count = 0;
    scanf("%s",s);
    
    for(int i = 0; s[i] != '\0'; i++)
        count++;
    
    printf("%d",count);
}