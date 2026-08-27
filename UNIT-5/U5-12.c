// 12. Write a program to demonstrate use of #include directive

#include<stdio.h>
#include<conio.h>

void main(){

    int x,y;
    clrscr();

    //#include<stdio.h> includes functions such as printf() and scanf() for input and output
    //#include<conio.h> includes functions such as clrscr() and getch()
    
    printf("Enter Numbers: \n");
    scanf("%d%d",&x,&y);
    printf("Sum is: %d",x+y);
    getch();
}