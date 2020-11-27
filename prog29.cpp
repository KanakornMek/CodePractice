#include <stdio.h>

using namespace std;

int main()
{
    int a = 0;
    for(int i = 1; i <= 101; i+=2)
    {
        a = a + i;
    }
    printf("%d",a);
    return 0;
}