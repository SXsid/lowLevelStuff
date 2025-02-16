#include <stdio.h>
// in replace a will be the ref and *a will be the pointer pointing to that memory address;
int replace(int *a)
{
    // change the ref to value
    *a = 40;
    return 0;
}

int main()
{

    int a = 10;
    replace(&a);
    printf("%d\n", a);
    return 0;
}