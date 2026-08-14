// 3. Write a program that Print 1 3 5 7 ... N

#include <stdio.h>
#include <conio.h>

void main() {
    int i,n;
    clrscr();
    printf("Enter Endpoint Number: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        if(i%2!=0){
            printf("%d ", i);
        }
    }
    getch();
}