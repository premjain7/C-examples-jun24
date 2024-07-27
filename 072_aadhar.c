//program to check if the inputted aadhar number is valid or not
#include<stdio.h>
int main()
{
    long long int no,c=0,r,temp=0;
    char name[20];

    printf("Enter Your Name...:");
    scanf("%[^\n]",&name);

    printf("Enter Your Aadhar  Number...:");
    scanf("%lld",&no);

    temp=no;

    while(no!=0)
    {
        r=no%10;
        no=no/10;
        c++;
    }
    no=temp;


    if(c==12)
        printf("Heyy %s Your Aadhar Number %lld Is Successfully Verified...",name,no);
    else
        printf("Heyy %s Your Aadhar Number %lld Is Invalid Kindly Check...",name,no);

}
