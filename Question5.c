#include<stdio.h>
int main()
{
    int a[10],i,smallest;
    printf("Enter 10 values:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }

    }
    printf("Smallest of ten number is %d",smallest);
    return 0;
}