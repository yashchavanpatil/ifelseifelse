#include<stdio.h>

void main()
{
    int n;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)
        printf("Positive number");
    else if(n < 0)
        printf("Negative number");
    else
        printf("Zero");

    getch();
}