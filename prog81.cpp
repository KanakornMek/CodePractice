#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[100];
    char author[100]; 

};

int main()
{
    Book b1, b2;
    b1.id = 101;
    b1.title = "C Programming Hand Note";
    b1.author = "Mukla.C";
    b1.id = 102;
    b1.title = "Programming with Fun";
    b1.author = "Joy Billah";
    printf("Book1 Information:\n");
    printf("ID: %d\n", b1.id);
    printf("Title: %s\n",b1.title);
    printf("Author: %s\n\n",b1.author);
    printf("Book1 Information:\n");
    printf("ID: %d\n", b2.id);
    printf("Title: %s\n",b2.title);
    printf("Author: %s\n\n",b2.author);
    return 0;
}
