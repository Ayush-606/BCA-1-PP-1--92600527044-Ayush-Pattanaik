// 8. Write a program to find out Fibonacci series up to user input using UDF. 

#include<stdio.h>
#include<conio.h>

int fibo(int n);

int fibo(int n){
    int a = 0, b = 1, c,i;
    for(i = 1; i <= n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

void main(){
    int x;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&x);
    fibo(x);
    getch();
}