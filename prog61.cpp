#include <stdio.h>

double Area(int length)
{
    double width = length*3/5.;
    return width * length;
}

int main()
{
    int i;
    
    scanf("%d", &i);
    printf("%.2f",Area(i));

    return 0;
}