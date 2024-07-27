//program to read birth date of a person and display lucky number
#include<stdio.h>
int main()
{
    int dob,sum=0,r,r1,sum1=0;

    printf("Enter Your Birth Date(DD/MM/YYYY)...:");
    scanf("%d",&dob);

    while(dob!=0)
    {
        r=dob%10;
        sum=sum+r;
        dob=dob/10;
    }
    while(sum!=0)
    {
        r1=sum%10;
        sum1=sum1+r1;
        sum=sum/10;
    }

    printf("Lucky Number....:%d",sum1);

}
