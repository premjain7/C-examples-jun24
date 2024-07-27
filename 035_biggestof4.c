//program to read 4 numbers and display the biggest number
#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=b=c=d=0;

    printf("Enter 4 Numbers....:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b&&a>c&&a>d)
        printf("%d Is The Biggest Number",a);
    else
        if(b>a&&b>c&&b>d)
        printf("%d is The Biggest Number",b);
        else
            if(c>a&&c>b&&c>d)
            printf("%d Is The Biggest Number",c);

    else
        printf("%d Is The Biggest Number",d);


}
