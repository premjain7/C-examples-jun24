//program to read 10 numbers and display sum of even and odd numbers
#include<stdio.h>
int main()

{
    int no,i,sum1=0,sum2=0;

    for(i=1;i<=10;i++)
    {
        printf("Enter %d. Number...:",i);
        scanf("%d",&no);


    if(no%2==0)
    {
        sum1=sum1+no;
    }
    else
    {
        sum2=sum2+no;
    }

    }

    printf("\nSum Of Even Numbers Is...:%d",sum1);
    printf("\nSum Of Odd Numbers Is...:%d",sum2);


}
