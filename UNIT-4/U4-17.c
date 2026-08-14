// 17. Write a program to find out prime numbers up to user series. 

#include <stdio.h>
#include <conio.h>

void main(){
    int n, i, j, count;
    clrscr();
    printf("Enter limit: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++){
        count = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d ", i);
        }
    }
    getch();
}