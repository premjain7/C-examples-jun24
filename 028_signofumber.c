//program to check if a number is positive or negative
#include<stdio.h>
int main()
{
    int x;
    x=0;
    printf("Enter A Number...:");
    scanf("%d",&x);

    if(x>0)
    {
        printf("The Given Number Is Positive");
    }
    else
    {
        printf("The Given Number Is Negative");
    }
      return 0;
}
