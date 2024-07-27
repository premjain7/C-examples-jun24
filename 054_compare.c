//program to read two integers and compare them
#include<stdio.h>
int main()
{
    int a,b;
    a=b=0;

    printf("Enter An Integer..:");
    scanf("%d",&a);

    printf("Enter Another Integer..:");
    scanf("%d",&b);

    if(a<b)
        printf("Up");
    else
        if(a>b)
           printf("Down");
        else
            printf("Equal");

}
