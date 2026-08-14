// 20. Write a program to display following pyramid using loop. (Upto N terms)
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>
#include<conio.h>

void main(){
    int n, i, j, num = 1;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    getch();
}
