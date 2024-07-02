//program to evaluate (a+b)^2
#include<stdio.h>
main()
{
    int a,b,res;
    printf("Enter A Number...:");
    scanf("%d",&a);
    printf("Enter Another Number...:");
    scanf("%d",&b);
    res=(a+b)*(a+b);
    printf("Evaluation Of (a+b)^2 is ...:%d",res);
}
