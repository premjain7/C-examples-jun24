//program to read array of n elements and print total and average
#include<stdio.h>
int main()
{
    int arr[20],i,sum=0,size;
    float avg;

    printf("Enter How Many Elements You Want To Input...(1-20):");
    scanf("%d",&size);


    for(i=1;i<=size;i++)
    {
        printf("Enter A Number...:");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/5;
    printf("Sum Is...:%d",sum);
    printf("\nAverage Is...:%.2f",avg);
}
