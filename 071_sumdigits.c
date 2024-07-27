//program to print sum of  digits of inputted numbers
#include<stdio.h>
int main()
{
    int no,sum=0,r;

    printf("Enter A Number...:");
    scanf("%d",&no);

    while(no!=0)
    {
        r=no%10;
        no=no/10;
        sum+=r;
    }

    printf("Sum Of The Digits Is...:%d",sum);
}


