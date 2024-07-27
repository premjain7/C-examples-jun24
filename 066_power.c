//program to print power of a number
#include<stdio.h>
int main()
{
    int n,p,res=1,i;


    printf("Enter A Number...:");
    scanf("%d",&n);

    printf("By What Power You Wanna Raise...:");
    scanf("%d",&p);

    for(i=1;i<=p;i++)
    {
        res=res*n;
    }
    printf("Result Is...:%d",res);


}

