//program to read basic info from the user and display salary
#include<stdio.h>
int main()

{
    char gen,ms;
    int age;

    printf("Enter Your Gender...(M/F):");
    scanf("%c",&gen);

    printf("Enter Your Marital Status...(M/U):");
    fflush(stdin);
    scanf("%c",&ms);

    printf("Enter Your Age...:");
    scanf("%d",&age);

    if(ms=='m'||ms=='M')
        printf("You Are Eligible For Bonus");
    else
        if(ms=='u'||ms=='U')
        {
              if(gen=='m'||gen=='M')
                {
                    if(age>30)
                        printf("You Are Eligible For Bonus");
                    else
                        printf("Not Eligible For Bonus");
                }
                else
                    if(gen=='f'||gen=='F')
                {

                if(age>25)
                     printf("Eligible For Bonus");
                else
                    printf("Not Eligible For Bonus");

                }

        }

}
