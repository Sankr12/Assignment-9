//Write a program to print the cubes of the first 10 natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    while(a>=1)
    {
        printf("%d\n",a*a*a);
        a--;
    }
    getch();
}

