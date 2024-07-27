//program to read floor number and tell the view
#include<stdio.h>
int main()

{
    int floor=0;

    printf("At Which Floor Are You Residing...:");
    scanf("%d",&floor);

        if(floor>50)
           printf("We Have Only 50 Floors..");
        else
            if(floor%2==0)
               printf("You Have Beach View");
            else
               if(floor%2!=0)
                  printf("You Have Forest View");


return 0;

}
