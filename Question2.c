#include<stdio.h>
int main()
{
    int a[10],i,avg,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("The average of an array is %d",avg);
    return 0;

}