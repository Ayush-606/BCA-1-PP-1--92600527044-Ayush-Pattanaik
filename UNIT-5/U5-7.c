// 7. Write a program to find out Number is Prime or not.

#include<stdio.h>
#include<conio.h>

int prime(int n);

int prime(int n){
    int i, count = 0;
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2)
        printf("Number is Prime");
    else
        printf("Number is not Prime");
    return 0;
}

void main(){
    int x;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&x);
    prime(x);
    getch();
}