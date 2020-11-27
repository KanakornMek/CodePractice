#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100]={"We"};
    char s2[]={" Love"};
    char s3[]={" Programming"};
    strcat(s1,s2);
    strcat(s1, s3);
    printf("%s",s1);
    return 0;
}