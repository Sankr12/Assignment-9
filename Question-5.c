//Write a program to print the first 10 even natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    while(a>=1)
    {
        printf("%d\n",2*a);
        a--;
    }
    getch();
}
