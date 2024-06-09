// program to swap two numbers

#include<stdio.h>
main()
{
 int a,b;
 a=b=0;
 printf("Enter a number A:");
 scanf("%d",&a);

 printf("Enter another number:");
 scanf("%d",&b);

 a=a+b;
 b=a-b;
 a=a-b;

 printf("\nA is :%d ",a);
 printf("\nB is :%d ",b);

getch();

}
