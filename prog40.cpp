#include <stdio.h>

using namespace std;

int main()
{
    int sum = 0;
    double avg;
    int counter = 0;
    for(int i = 10; i <= 500; i++)
    {
        if(i % 60 == 0)
        {
            sum += i;
            counter++;
        }
        
    }
    avg=(sum)/counter;
    printf("Sum = %d, Average =%.2lf ", sum, avg);
}