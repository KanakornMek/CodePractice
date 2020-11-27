#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is max",a);
        }        
    }
    else if(b>c)
    {
        printf("%d is max",b);
    }
    else
    {
        printf("%d is max",c);
    }
    
}