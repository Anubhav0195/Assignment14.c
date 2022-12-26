#include<stdio.h>
int main()
{
    int a[10],max=0,max2=0,i;
    printf("Enter the elements of array:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max2=max;
            max=a[i];
        }
        if(a[i]!=max && a[i]>max2)
        max2=a[i];
    }
    printf("\n");
    printf("max = %d\n",max);
    printf("max2 = %d\n",max2);
    return 0;
}