#include <stdio.h>

int main()
{
    FILE *pFile = fopen("text.txt", "w");
    fprintf(pFile, "Hi my name is Sudhanshu shekhar\n");
    fclose(pFile);
}