#include<stdio.h>
int main()
{
    int movie1,movie2,movie3;
    movie1=movie2=movie3=0;

    printf("Rate Chichhore Movie On The Scale of 1-10...:");
    scanf("%d",&movie1);

    printf("Rate Ms Dhoni The Untold Story Movie On The Scale of 1-10...:");
    scanf("%d",&movie2);

    printf("Rate Vikram Movie On The Scale of 1-10....:");
    scanf("%d",&movie3);

    if(movie1>movie2 && movie1>movie3)
        printf("Chichhore Is The Hit Movie");
    else
        if(movie2>movie1 && movie2>movie3)
          printf("Ms Dhoni The Untold Story Is The Hit Movie");
        else
              printf("Vikram Is The Hit Movie");

return 0;




}
