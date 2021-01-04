#include <stdio.h>
#include <string.h>

int main()
{
    char in[105];
    int a[105] = {};
    int b[105] = {};
    int c[105];
    scanf(" %s", in);
    int lenOfA = strlen(in);
    for(int i = lenOfA - 1; i >= 0; i--)
    {
        a[lenOfA - 1 - i] = in[i] - '0';
    }
    scanf(" %s", in);
    int lenOfB = strlen(in);
    for(int i = lenOfB - 1; i >= 0; i--)
    {
        b[lenOfB - 1 - i] = in[i] - '0';
    }
    int carry = 0 ,result[105] = {};
    int max;
    if(lenOfA > lenOfB)
        max = lenOfA;
    else
        max = lenOfB;
    for(int i = 0; i < max; i++)
    {
        result[i] = (a[i] + b[i] + carry) % 10;
        c[i] = result[i];
        carry = (a[i]+ b[i]+ carry)/10;
    }
    int lenOfC;
    if(carry == 0)
    {
        lenOfC = max;
    }
    else
    {
        lenOfC = max + 1;
        c[max] = carry;
    }
    for(int i = lenOfC - 1 ; i >= 0; i--)
    {
        printf("%d",c[i]);
    }
}