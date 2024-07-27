//program to print ASCII chart
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("\t%d-%c",i,i);
    }
}
