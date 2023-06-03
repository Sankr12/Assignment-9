//Write a program to print the squares of first 10 natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    while(a>=1)
    {
        printf("%d\n",a*a);
        a--;
    }
    getch();
}

