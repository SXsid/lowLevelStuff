#include <stdio.h>
#include <stdlib.h>
// if we need to acces the poitner / chagne the value poitner is pointng we nee ddouble poitner to do so
void append(int **arr, int *size, int value)
{
    *size += 1;
    // it will add 4 more byte to the array/reloccate
    *arr = realloc(*arr, (*size) * sizeof(int));
    (*arr)[*size - 1] = value;
}

int main()
{
    int size;
    printf("what is size of array:");
    scanf("%d", &size);

    int *x = malloc(size * (sizeof(int)));
    if (x == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {

        printf("please enter the %d value of array:", i);
        scanf("%d", x + i);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d value of arr is %d\n", i, x[i]);
    }

    int value;
    printf("add the new value to append in alredy exiinstng arry:");
    scanf("%d", &value);
    append(&x, &size, value);
    for (int i = 0; i < size; i++)
    {
        printf("%d new value of arr is %d\n", i, x[i]);
    }
    free(x);
    return 0;
}