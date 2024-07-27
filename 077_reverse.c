//program to read a number and print the reverse
#include<stdio.h>
int main()
{
    int no,rev=0,r;

    printf("Enter A Number....:");
    scanf("%d",&no);

    while(no!=0)
    {
        r=no%10;
        rev=rev*10+r;
        no=no/10;
    }
    printf("Reverse Number Is...:%d",rev);

    return 0;
}
