// 20. Write a program to display following pyramid using loop. (Upto N terms)
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
#include<conio.h>

void main(){
    int n, i, j;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", i);
        }

        printf("\n");
    }

    getch();
}