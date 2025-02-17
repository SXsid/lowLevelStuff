#include <stdlib.h>
#include <stdio.h>

int main()
{

    // 2-d array

    int *array = malloc(4 * 4 * sizeof(int));
    // pointer to 2-d array row pointer

    int **array2D = malloc(4 * sizeof(int *));

    // assign the pointer to first place of the row
    for (int i = 0; i < 4; i++)
    {
        array2D[i] = &array[i * 4];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // extract array row pointer and then through j derefrece it to store the vlaue
            array2D[i][j] = i + j;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of an 2-d array at(%d,%d)is %d\n", i, j, array2D[i][j]);
        }
    }
    free(array);
    free(array2D);
}