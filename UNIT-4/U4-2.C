// 2. Write a program that Print 2 4 6 ..... 20

#include <stdio.h>
#include <conio.h>

void main() {
    int i;
    clrscr();
    for (i = 1; i <= 20; i++) {
        if(i%2==0){
            printf("%d ", i);
        }
    }
    getch();
}