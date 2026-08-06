#include<stdio.h>
#include<conio.h>

void main()
{
    char username[10], password[10], ch;
    int i=0;
    clrscr();

    printf("\nEnter Username: ");
    scanf("%s",&username);

    printf("\nEnter Password: ");
    while ((ch = getch()) != 13){
        password[i]=ch;
        printf("*");
	i++;
    }

    if (username[0]=='a'
        && username[1]=='d'
        && username[2]=='m'
        && username[3]=='i'
        && username[4]=='n'){
            if (password[0]=='1'
                && password[1]=='2'
                && password[2]=='3'
                && password[3]=='4'){
		    printf("\nLogin Successful");
		    printf("\nWelcome!!");
                }
            else 
		printf("\nIncorrect password");
        }
    else
	printf("\nIncorrect username");

    getch();

}