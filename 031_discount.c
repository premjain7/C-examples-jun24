//program to calculate discount and final bill amount using if and else
#include<stdio.h>
int main()
{
    int sales,dis,finalamt;
    sales=dis=finalamt=0;

    printf("Enter Sales...: ");
    scanf("%d",&sales);


    if(sales>=25000)
    dis=sales*10/100;

    else
    dis=sales*5/100;

    finalamt=sales-dis;
    printf("\nDiscount is....:%d",dis);
    printf("\nFinal Amount is...%d",finalamt);

    return 0;
}
