//program to read price of items and print the bill
#include<stdio.h>
int main()

{ int p1,p2,amt;
  p1=0;
  p2=0;
  amt=0;

    printf("Enter the price of iPhone... :Rs.");
    scanf("%d",&p1);

    printf("Enter the price of Cover Case... :Rs.");
    scanf("%d",&p2);

    amt= p1 + p2;

    printf("Total bill is :%d",amt);

    return 0;
    getch();
}
