// program to print total and average marks


#include<stdio.h>

int main()
{
    int m,p,c,e,s;
    float tot,avg;
    m=p=c=s=e=tot=avg=0;

    printf("Enter Your Mathematics marks...:");
    scanf("%d",&m);

    printf("\nEnter Your Physics marks...:");
    scanf("%d",&p);

    printf("\nEnter Your Chemistry marks...:");
    scanf("%d",&c);

    printf("\nEnter Your English marks...:");
    scanf("%d",&e);

    printf("\nEnter Your Sanskrit marks...:");
    scanf("%d",&s);

    tot=m+p+c+s+e;
    avg=tot/5;

    printf("\nYour Total Marks are ...:%.0f\n",tot);
    printf("Your Average is ...:%.2f",avg);
    printf("\n");




    return 0;

}
