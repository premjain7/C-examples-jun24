//program to read sales and print discount
#include<stdio.h>
int main()
{
    float sales,dis,amt;
    sales=dis=amt=0;

    printf("Enter Your sales...:");
    scanf("%f",&sales);

    if(sales>=25000)
        dis=sales*25/100;
    else
        if(sales>=20000&&sales<25000)
             dis=sales*20/100;
        else
            if(sales>=10000&&sales<20000)
               dis=sales*10/100;
            else
                if(sales>=5000&&sales<10000)
                    dis=sales*5/100;


               amt=sales-dis;
                printf("\nDiscount Is...:%.2f",dis);
                 printf("\nActual Amount Is...:%.2f",amt);

return 0;
}
