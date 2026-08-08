// 17. Input Month in number and print in text(for example input 1 then output January) 

#include<stdio.h>
#include<conio.h>

void main(){
    int i;
    clrscr();
    printf("\nEnter Day Number (1-12): ");
    scanf("%d",&i);
    if(i==1){
        printf("January");
    }
    else if(i==2){
        printf("February");
    }
    else if(i==3){
        printf("March");
    }
    else if(i==4){
        printf("April");
    }
    else if(i==5){
        printf("May");
    }
    else if(i==6){
        printf("June");
    }
    else if(i==7){
        printf("July");
    }
    else if(i==8){
        printf("August");
    }
    else if(i==9){
        printf("September");
    }
    else if(i==10){
        printf("October");
    }
    else if(i==11){
        printf("November");
    }
    else if(i==12){
        printf("December");
    }
    else{
        printf("Invalid Day");
    }
    getch();
}