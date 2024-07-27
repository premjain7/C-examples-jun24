//program to read marks of subjects and display grade
#include<stdio.h>
int main()
{
    int m,p,c;
    float tot,avg;
    m=p=c=tot=avg=0;

    printf("Enter Your Maths Marks...:");
    scanf("%d",&m);

    printf("Enter Your Physics Marks...:");
    scanf("%d",&p);

    printf("Enter Your Chemistry Marks...:");
    scanf("%d",&c);

    tot=m+p+c;
    avg=tot/3;
    if(tot>300)
        printf("Invalid Input");
    else
    {
    if(avg>=90)
        printf("A+");
    else
        if(avg>=80&&avg<90)
           printf("A");
        else
            if(avg>=70&&avg<80)
              printf("B+");
            else
                if(avg>=60&&avg<70)
                   printf("B");
                else
                    if(avg>=50&&avg<60)
                      printf("C");
                    else
                        if(avg<50)
                          printf("F");

    }

return 0;

}
