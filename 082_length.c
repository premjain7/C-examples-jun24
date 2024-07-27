//program to read name of a person and display length till the user inputs N
#include<stdio.h>
#include<string.h>
int main()
{
    int len,x=0;
    char name[20];

    while(x!=1)
    {
        printf("\nEnter Your Name...:");
        scanf("%[^\n]%*c",&name);

        if(name[0]=='N')
        {
            x=1;
            break;
        }

        else
            {
            len=strlen(name);
            printf("Length Of The Name Is...:%d",len);
        }
    }
}
