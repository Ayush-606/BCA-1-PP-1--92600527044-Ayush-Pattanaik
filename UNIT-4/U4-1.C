// 1. Write a program that Print 1 2 3 4 .... 10

#include <stdio.h>
#include <conio.h>

void main() {
    int i;
    clrscr();
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    getch();
}