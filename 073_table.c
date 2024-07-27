//program to print table for inputted number
#include<stdio.h>
int main()
{
    int tab,i,c,res;

    printf("Enter The Table...:");
    scanf("%d",&tab);

    printf("Enter The Starting Number...:");
    scanf("%d",&i);

    printf("Enter The Ending Number...:");
    scanf("%d",&c);

    while(i<=c)
    {
        res=i*tab;
        printf("\n%d*%d=%d",tab,i,res);
        i++;
    }
}
