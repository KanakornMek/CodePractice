#include <stdio.h>

struct Writer
{
    char name[50];
    char genre[50];
};

int main()
{
    Writer WriterRecords[] = {{"Mukla.C","Technical"},{"Mostasim Billah","Technical"},{"Mahady Joy","Technical"}};
    for(int i = 0; i < 3; i++)
    {
        printf("%d.\n", i+1);
        printf("%s\n", WriterRecords[i].name);
        printf("%s\n", WriterRecords[i].genre);
    }
    return 0;
}