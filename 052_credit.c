//program to read basic info and print bill
#include<stdio.h>
int main()
{
    char mop;
    int dis,bill,ext,days,price;
    dis=bill=ext=days=0;

    printf("Enter The Price Of Tv...:");
    scanf("%d",&price);

    printf("Would You Like To Pay Through Cash...(Y/N):");
    fflush(stdin);
    scanf("%c",&mop);

    if(mop=='Y'||mop=='y')
    {
        dis=price*25/100;
        bill=price-dis;
        printf("Your Total Bill Is...:%d",bill);
    }

    else
        if(mop=='N'||mop=='n')
        {
            printf("In How Many Days Are You Gonna Pay The Bill...:");
            scanf("%d",&days);

            if(days<=7)
            {
                dis=price*15/100;
                bill=price-dis;
                printf("Your Total Bill Is...:%d",bill);
            }
            else
            {
                ext=price*10/100;
            bill=price+ext;
           printf("Your Total Bill Is...:%d",bill);
            }
        }

}
