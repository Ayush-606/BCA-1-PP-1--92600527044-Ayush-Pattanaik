// 9. Print first 10 natural number with its square and cube.

#include <stdio.h>
#include <conio.h>

void main() {
    int i;
    clrscr();
    for (i = 1; i <= 10; i++) {
        printf("%d, Square:%d, Cube:%d \n", i,i*i,i*i*i);
    }
    getch();
}