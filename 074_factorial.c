//program to read a number and print its factorial
#include<stdio.h>
int main()
{
    int no,res=1,c,temp;

    printf("Enter A Number...:");
    scanf("%d",&no);
    temp=no;

    while(no!=0)
    {
        c=no--;
        res=res*c;
    }
     no=temp;

    printf("Factorial of %d Is %d",no,res);
}
