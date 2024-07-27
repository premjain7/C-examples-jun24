//program to read a name and dsiplay it length many times
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int i=1,len;

    printf("Enter Your Name...:");
    scanf("%s",&name);

    len=strlen(name);

    while(len>=i)
    {
        printf("\n%d.%s",i,name);
        i++;
    }



}
