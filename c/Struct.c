#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// same as interface
struct bookedSeats
{
    char studentId[20];
    char libraryId[40];
    char name[40];
    int amount;
};

int main()
{
    struct bookedSeats seat1;
    strcpy(seat1.studentId, "sdafsdf");
    strcpy(seat1.libraryId, "sdfdfdas");
    strcpy(seat1.name, "aman");
    seat1.amount = 12;
    printf("my name is %s", seat1.name);
    return 0;
}