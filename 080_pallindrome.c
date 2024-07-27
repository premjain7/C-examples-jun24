//program to check if a number is palindrome or not
#include<stdio.h>
int main()
{
    int no,rev,r,temp;

    printf("Enter A Number...:");
    scanf("%d",&no);
    temp=no;

    while(no<=0)
    {
        r=no%10;
        rev=rev*10+r;
        no=no/10;
    }
    no=temp;

    if(rev==no)
        printf("It Is A Palindrome");
    else
        printf("It Is Not A Palindrome");

    return 0;
}
