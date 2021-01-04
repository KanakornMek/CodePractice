#include <stdio.h>

struct Student
{
    int id;
    double cgpa;
    char name[100]; 

};
int main()
{
    Student s1;
    printf("Enter ID: ");
    scanf("%d",&s1.id);
    printf("Enter CGPA: ");
    scanf("%lf",&s1.cgpa);
    printf("Enter NAME: ");
    scanf("%s",s1.name);
    printf("\n");
    printf("**STUDENT INFORMATION**\n\n");
    printf("ID: %d\n",s1.id);
    printf("CGPA: %lf\n",s1.cgpa);
    printf("NAME: %s",s1.name);
    return 0;
}