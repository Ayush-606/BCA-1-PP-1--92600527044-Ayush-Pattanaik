// 10. Accept 10 numbers from user one by one and displays its total value on screen.

#include <stdio.h>
#include <conio.h>

void main() {
    int i,sum=0,n;
    clrscr();
    for (i = 1; i <= 10; i++) {
        printf("\nEnter Number:");
        scanf("%d",&n);
        sum+=n;
    }
    printf("Sum: %d",sum);
    getch();
}