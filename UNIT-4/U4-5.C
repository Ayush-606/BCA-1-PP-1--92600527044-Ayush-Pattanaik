// 5. Write a program that Print 200 198 196 ... 180

#include <stdio.h>
#include <conio.h>

void main() {
    int i;
    clrscr();
    for (i = 200; i >= 180; i--) {
        if(i%2==0){
            printf("%d ", i);
        }
    }
    getch();
}
