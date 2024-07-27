//program to print factors of given number
#include<stdio.h>
int main()
{
    int no,f,d=0;

    printf("Enter A Number...:");
    scanf("%d",&no);

    while(d<=no)
    {
        no%d;
        d++;
        if(no%d==0)
        {
            printf("\n%d Is A Factor",d);
        }
    }


}
