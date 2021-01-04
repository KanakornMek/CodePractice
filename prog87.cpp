#include <stdio.h>

int main()
{
    char s[105];
    FILE* f = fopen("myFile.txt","w");
    fprintf(f , "We Love");
    fclose(f);

    f = fopen("myFile.txt","r");
    fscanf(f,"%[^\n]",s);
    printf("%s\n",s);
    fclose(f);

    f = fopen("myFile.txt","a");
    fprintf(f," Our Country");
    fclose(f);

    f = fopen("myFile.txt","r");
    fscanf(f,"%[^\n]",s);
    printf("%s\n",s);
    fclose(f);

    return 0;
}