#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    printf("%d", rand()%4+1);
    switch (rand()%3+1)
    {
        case 1:
            printf("eng");
            break;
        case 2:
            printf("math");
            break;
        case 3:
            printf("thai");
            break;
        case 4:
            printf("social");
            break;
    }
    return 0;
}''