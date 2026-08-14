// 16. Write a program that input number and find out number is Prime or not. 

#include <stdio.h>
#include<conio.h>

void main(){
    int n, i, count = 0;
    clrscr();
    printf("Enter number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2)
        printf("Number is Prime");
    else
        printf("Number is not Prime");

    getch();
}