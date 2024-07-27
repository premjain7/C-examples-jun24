//program to print natural numbers from n to 1
#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter A Number...:");
    scanf("%d",&n);

    for(i=1;i<=n;n--)
    {
        printf("\t%d",n);
    }
}

