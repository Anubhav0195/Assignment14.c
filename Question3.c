#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter the 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        se=se+a[i];
        else
        so=so+a[i];
    }
    printf("\nSum of all even number is %d",se);
    printf("\nSum of all odd number is %d",so);

}