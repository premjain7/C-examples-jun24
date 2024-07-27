//program to read price of 3 pens and display the costliest one
#include<stdio.h>
int main()
{
    int rey,mon,par;
    rey=mon=par=0;

    printf("Enter The Price Of Reynolds Pen...:");
    scanf("%d",&rey);

    printf("Enter The Price Of Montex Pen...:");
    scanf("%d",&mon);

    printf("Enter The Price Of Parker Pen...:");
    scanf("%d",&par);

    if(rey>mon)
        {
        if(rey>par)

            printf("Reynolds Is The Costliest Pen");

        else
            printf("Parker Is Costliest Pen");
         }

     else
        if(mon>rey)
        {
            if(mon>par)
                printf("Montex Is The Costliest Pen");
            else
                printf("Parker Is The Costliest Pen");
        }
}
