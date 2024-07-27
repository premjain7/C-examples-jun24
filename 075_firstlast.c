//program to find the sum of first and last digits of inputted number
#include<stdio.h>
int main()
{
    int i,no,r,r1,r2=1,temp,sum,c=0;

    printf("Enter A Number...:");
    scanf("%d",&no);

    temp=no;

    while(no!=0)
    {
        r=no%10;
        no=no/10;
        c++;
    }

    no=temp;

    for(i=1;i<c;i++)
    {
        r2=r2*10;

    }

    r1=no%10;
    r2=no/(r2);

    sum=r1+r2;

    printf("%d",sum);



}
