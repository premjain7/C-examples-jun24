//program to read temperature and display the corresponding message
#include<stdio.h>
int main()
{
    int temp=0;

    printf("Enter The Temperature Of Your Surroundings(In Centigrade)...:");
    scanf("%d",&temp);

    if(temp<0)
        printf("Freezing Weather");
    else
        if(temp>0&&temp<10)
           printf("Very Cold Weather");
        else
            if(temp>10&&temp<20)
              printf("Cold Weather");
            else
                if(temp>20&&temp<30)
                  printf("Normal Weather");
                else
                    if(temp>30&&temp<40)
                       printf("Hot Weather");
                     else
                        printf("Very Hot Weather");

}
