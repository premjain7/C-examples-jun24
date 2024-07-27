//program to read a date and print the date of the next day
#include<stdio.h>
int main()

{
    int d,m,y,c;
    d=m=y=c=0;

    printf("Enter A Date In DD MM YYYY Format...:");
    scanf("%d%d%d",&d,&m,&y);

    c=d+1;

    printf("Date Following %d:%d:%d is %d:%d:%d",d,m,y,c,m,y);


}


