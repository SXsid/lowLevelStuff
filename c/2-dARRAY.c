#include <stdio.h>

int main()
{
    // 2 row and 3 coloum
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("value at row:%d col %d is %d\n", i, j, matrix[i][j]);
        };
    };
    return 0;
}