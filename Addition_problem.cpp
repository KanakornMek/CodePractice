#include <stdio.h>
#include <algorithm>

using namespace std;
struct Student
{
    char name[100];
    int score;
};

int main()
{
    int num;
    printf("Number of people: ");
    scanf("%d",&num);
    Student *s = new Student[num]; 
    for (int i = 0 ; i < num; i++)
    {
        printf("Input name: ");
        scanf(" %s", s[i].name);
        printf("Input Score: ");
        scanf(" %d", &s[i].score);
    }
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num - 1; j++)
        {
            if(s[j].score > s[j+1].score)
            {
                Student old = s[j];
                s[j] = s[j+1];
                s[j+1] = old;
            }
        }
    }
    for(int i = 0; i < num; i++)
    {
        printf("%s ", s[i].name);
        printf("%d\n", s[i].score);
    }

    return 0;
}
/*
3
chi 
98
GOT
56
DOM
68


*/