#include<stdio.h>
int main()

{
    int age=0;
    char ms,gen;

    printf("Enter Your Marital Status...(M/U):");
    scanf("%c",&ms);

    printf("Enter Your Gender..(M/F):");
    fflush(stdin);
    scanf("%c",&gen);

    printf("Enter Your Age...:");
    scanf("%d",&age);

    if ( (ms=='M'||ms=='m') || ( (gen=='M'||gen=='m') && age>=30) ||( (gen=='F'||gen=='f') &&age>=25))
        printf("Eligible for Bonus...");
    else
        printf("Not Eligible for Bonus...");

   return 0;
}
