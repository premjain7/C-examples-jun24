//program to read cost price and selling price and display profit or loss
#include<stdio.h>
int main()

{
    int cp,sp,tot;
    cp=sp=tot=0;

    printf("Enter Cost Price...:");
    scanf("%d",&cp);

    printf("Enter Selling Price....:");
    scanf("%d",&sp);

    if(sp>cp)
    {
        tot=sp-cp;
        printf("Heyy, You Have Made a Profit Of Rs.%d",tot);
    }
    else if(cp>sp)
    {
        tot=cp-sp;
        printf("Oops!,You Incurred a Loss of %d",tot);

    }
    else
        printf("Hmmm!,No Loss....No Profit...");





}
