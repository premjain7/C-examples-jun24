//program to check if a number is even or odd using conditional operators
#include<stdio.h>
int main()
{
    int x=0;

    printf("Enter A Number...:");
    scanf("%d",&x);

    x%2==0?printf("Even Number"):printf("Odd Number");
}
