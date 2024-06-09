#include<stdio.h>
main()
{
    int bill,paid,bal;
    bill=bal=paid=0;


    printf("\nEnter the Total Bill Amount...:");
    scanf("%d",&bill);

    printf("\nEnter the Total Amount Paid by the Customer...:");
    scanf("%d",&paid);

    bal=paid-bill;

    printf("\nTotal Balance Amount is..:%d\n",bal);


}
