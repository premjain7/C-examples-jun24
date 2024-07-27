//switch case
#include<stdio.h>
int main()
{
    char signal;

    printf("Enter The Traffic Signal Light Colour...:");
    scanf("%c",&signal);

    signal=toupper(signal);

    switch(signal)
    {
        case 'R':printf("RED Light Please STOP");break;
        case 'Y':printf("YELLOW Light Please Check And Go");break;
        case 'G':printf("GREEN Light Please GO");break;
        default:printf("THERE IS NO SIGNAL POINT");break;
    }

    return 0;
}

