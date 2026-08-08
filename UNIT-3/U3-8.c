// 8. Write a program to input year and find whether year is leap year or not.(Hint Use % Sign) 

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;

    clrscr();

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    getch();
    return 0;
}