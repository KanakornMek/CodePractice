#include <stdio.h>
double add(int a, int b)
{
    return a+b;
}
double sub(int a, int b)
{
    return a-b;
}
double multiply(int a, int b)
{
    return a*b;
}
double divide(int a, int b)
{
    return a/(double) b;
}


int main()
{
    int i , j;  
    scanf("%d%d",&i,&j);
    printf("Add Value :             %.2f\n",add(i,j));
    printf("Subtraction Value :     %.2f\n",sub(i,j));
    printf("Multiplication Value :  %.2f\n",multiply(i,j));
    printf("Divided Value :         %.2f\n",divide(i,j));

}