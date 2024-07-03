//program to read price of 2 mobiles and display which is costlier
#include<stdio.h>
int main()
{

    int apple,samsung;
    apple=samsung=0;

    printf("Enter The Price of iPhone...:");
    scanf("%d",&apple);

    printf("Enter The Price of Samsung Phone..:");
    scanf("%d",&samsung);

    if(apple>samsung)
{
    printf("iPhone Is Costlier");
}
   if(samsung>apple)
{ printf("Samsung Is Costlier Phone");

}
     else{
        printf("Both are At Same Price");
    }
 return 0;
}
