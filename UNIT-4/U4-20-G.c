// 20. Write a program to display following pyramid using loop. (Upto N terms)
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>
#include<conio.h>

void main(){
    int n, i, j;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    getch();
}