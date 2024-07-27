//program to print even numbers
#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter A Number...:");
    scanf("%d",&x);

    if(x%2==0)
    {
        while(x!=0)
        {
            x=x-2;

            printf("\t%d",x);
        }
    }
    else
    {
        x--;
        printf("%d",x);
        while(x!=0)
        {
            x=x-2;
            printf("\t%d",x);
        }
    }



}
