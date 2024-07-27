//program to print 20 tables till 12
#include<stdio.h>
int main()
{
    int tno=1,i=1,res=0,c=1;

    for(c=1;c<=20;c++)
    {
        for(i=1;i<=12;i++)
        {
            res=i*c;
            printf("\n%d*%d=%d",c,i,res);
        }
        printf("\n");
    }


}

