#include<stdio.h>
int main()

{
    int id,units;
    float bill;
    char name;


    printf("Enter Your Name...:");
    scanf("%[^\n]",&name);

    printf("Enter Your Customer ID...:");
    scanf("%d",&id);

    printf("Enter The Number of Units Consumed...:");
    scanf("%d",&units);

    if(units<=199)
        bill=units*1.2;
    else
        if(units>=200&&units<400)
           bill=units*1.5;
        else
            if(units>=400&&units<600)
                bill=units*1.8;
            else
                if(units>=600)
                   bill=units*2;



            if(bill<100)
                printf("Minimum Bill Should Exceed 100/-");

            if(bill>400)
            {
                printf("Your Bill Has Exceeded Rs.400 a surcharge of 15% will be charged");

                bill=bill*15/100 +bill;
            }


         printf("\nTotal Bill Is....:%.2f",bill);





}
