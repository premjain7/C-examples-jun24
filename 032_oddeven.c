//program to check whether a number is odd or even
#include<stdio.h>
int main()
{
    int x=0;

    printf("Enter A Number...:");
    scanf("%d",&x);

    if(x%2==0)
        printf("%d Is Even",x);
    else
        printf("%d Is Odd",x);

    return 0;
}
