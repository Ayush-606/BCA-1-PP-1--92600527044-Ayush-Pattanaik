// 20. Write a program to display following pyramid using loop. (Upto N terms)
// 12345
// 2345
// 345
// 45
// 5

#include <stdio.h>
#include<conio.h>

void main(){
    int n, i, j;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            printf("%d ", j);
        }

        printf("\n");
    }
    getch();
}