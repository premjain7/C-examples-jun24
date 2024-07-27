//program to read 10 numbers and print the biggest one
#include<stdio.h>
int main()
{
    int no,big=0,i;

    for(i=1;i<=10;i++)
    {
        printf("Enter %d. Number...:",i);
        scanf("%d",&no);

        if(no>big)
            big=no;
    }

     printf("Biggest Of 10 Numbers Is...:%d",big);

}
