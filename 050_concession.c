//program to read basic info from the user and display concession
#include<stdio.h>
int main()

{
    int age=0;
    char gen;

    printf("Enter Your Gender...(M/F):");
    scanf("%c",&gen);

    printf("Enter Your Age... ");
    scanf("%d",&age);

    if(((gen=='m'||gen=='M')&&age>60) || ((gen=='f'||gen=='F')&&age>50))
        printf("Fifty Percent Concession Is Given");
    else
        if(age<5)
           printf("Full Concession Is Given");
        else
            printf("No Concession Is Given");
}
