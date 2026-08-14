// 19. Write a program that input number and find out factorial of given number. 

#include <stdio.h>
#include <conio.h>

void main() {
    int i,fact=1,n;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        fact*=i;
    }
    printf("Factorial: %d",fact);
    getch();
}