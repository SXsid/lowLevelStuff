#include <stdio.h>

int main()
{
    // in int array if value is not defiend 0 will be there
    int arr[10] = {1, 2, 3};
    char name[20] = "sid";
    // in char array a stoppter comes and the after that all the value doenst exist
    printf("%d\n", arr[11]);
    printf("%c\n", name[2]);
    return 0;
}