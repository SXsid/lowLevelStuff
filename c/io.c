// header file wich wil include trhe futon
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("i see so your age is:%d \n", age);

    while (getchar() != '\n')
        ;
    // array is alredy store the memory address so no need for the &
    char name[50];
    printf("Tell me your name ");
    fgets(name, sizeof(name), stdin);
    printf("ohh so your name is %s\n", name);
    return 0;
}