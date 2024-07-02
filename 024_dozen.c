//Program to Read the Price of 1 Dozen Apples and Display the Price of 1 Apple
#include<stdio.h>
main()
{
    float tot,price1;
    printf("Enter The Price Of Dozen Apples...:");
    scanf("%f",&tot);
    price1=tot/12;
    printf("\nThe Price Of 1 Apple(In Rs) Is...:%.2f\n",price1);
}
