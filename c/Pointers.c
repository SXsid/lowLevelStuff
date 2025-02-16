#include <stdio.h>

int main()
{

    int age = 40;
    // this will point toward to the memory address to the age
    int *newPointer = &age;
    printf("So the real pointing toward is %p\n", newPointer);
    printf("and the pointer value which wil bve accessed with * %d\n", *newPointer);

    int arr[2] = {1, 2};
    // it will point to memroy of the first value of the array;
    int *arrPointer = arr;
    for (int i = 0; i < 2; i++)
    {

        printf("the addres for the %d is %p\n", arr[i], arrPointer + i);
    }
}