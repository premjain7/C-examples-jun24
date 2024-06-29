//program to print electricity bill

#include<stdio.h>
main()
{
    int u1,u2;
    float bill;
    const float RATE=7.85;

    printf("Enter The Number of Units Consumed This Month...:");
    scanf("%d",&u1);

    printf("Enter The Number of Units Consumed Last Month...:");
    scanf("%d",&u2);

    bill=(u1+u2)*RATE;

    printf("The Electricity Bill is ...:%.2f",bill);





}
