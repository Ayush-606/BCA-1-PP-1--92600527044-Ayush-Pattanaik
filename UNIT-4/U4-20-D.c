// 20. Write a program to display following pyramid using loop. (Upto N terms)
// 1
// 00
// 111
// 0000
// 11111

#include <stdio.h>
#include<conio.h>

void main(){
    int n, i, j;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            if(i % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    getch();
}