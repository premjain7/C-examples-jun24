
// program to convert days into years months weeks and days
#include<stdio.h>
main()
{
    int y,m,w,d;
    y=m=w=d=0;

    printf("Enter The Number of Days...:");
    scanf("%d",&d);

    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    w=d/7;
    d=d%7;

    printf("Years:%d Months:%d Weeks:%d Days:%d ",y,m,w,d);



}
