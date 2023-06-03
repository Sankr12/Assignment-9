//Write a program to print the first 10 odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0;
    while(a<10)
    {
        printf("%d\n",2*a+1);
        a++;
    }
    getch();
}
