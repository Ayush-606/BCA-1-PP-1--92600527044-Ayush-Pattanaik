// 5. Write a program that Print 200 198 196 ... 180

#include <stdio.h>
#include <conio.h>

void main() {
    int i;
    clrscr();
    for (i = 200; i >= 180; i--) {
        printf("%d ", i);
    }
    getch();
}