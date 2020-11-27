#include <stdio.h>

using namespace std;

int main()
{
    int a[7]={-99, 45, 100, 245, 89, -327, 245};
    int max = a[0];
    for(int i = 0; i <= 6; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    for(int i = 0; i <= 6; i++)
    {
        if(a[i] == max)
        {
            printf("%d\n", i);
            break;
        }
    }
}