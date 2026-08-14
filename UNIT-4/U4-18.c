// 18. Write a program to find out Armstrong numbers up to user series. 

#include <stdio.h>
#include<conio.h>

void main(){
    int n, i, temp, digit, sum;
    clrscr();
    printf("Enter limit: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        temp = i;
        sum = 0;
        while(temp > 0){
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }
        if(sum == i){
            printf("%d ", i);
        }
    }
    getch();
}

