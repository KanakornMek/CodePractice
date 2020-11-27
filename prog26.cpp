#include <stdio.h>

using namespace std;

int main()
{
    for (int i = 100; i <= 600; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
        }
    }
}