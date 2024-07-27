//program to read 2 numbers and print their absolute difference
#include<stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter A Number....:");
    scanf("%d",&a);

    printf("Enter Another Number....:");
    scanf("%d",&b);

    if(a>b)
    {
        c=a-b;
        printf("%d Is The Absolute Difference",c);
    }
    else
        if(b>a)
    {
        c=b-a;
        printf("%d Is The Absolute Difference",c);

    }

    else
    {
        c=0;
        printf("0 is The Absolute Difference",c);
    }

}
