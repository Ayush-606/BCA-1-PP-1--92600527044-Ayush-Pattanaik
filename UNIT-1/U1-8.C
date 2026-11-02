// 8. Find out Fibonacci series up to given n values

#include<stdio.h>
#include<conio.h>

void main(){
    int n, a = 0, b = 1, c;
    clrscr();
    printf("Enter Limit: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    while(a<=n){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    getch();
}
