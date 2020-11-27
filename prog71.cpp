#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    char str[200];
    char copy[200];
    scanf("%s",str);
    strcpy(copy, str);
    int len = strlen(str);
    bool isPALIN = true;
    for(int i = 0; i <= len/2; i++)
    {
        swap(copy[i], copy[len-i-1]);
    }
    for(int i = 0; i <= len; i++)
    {
        if(str[i] != copy[i])
        {
            isPALIN = false;
        }
    }
    if(isPALIN)
        printf("YES");
    else
        printf("NO");

    
}