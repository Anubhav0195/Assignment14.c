#include<stdio.h>
int main()
{
    int num[10],i,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    
    printf("Sum of 10 number is %d",sum);
}