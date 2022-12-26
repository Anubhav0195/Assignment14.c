#include<stdio.h>
int main()
{
    int i,size,a[50],b[50];
    printf("\nEnter array size");
    scanf("%d",&size);
    printf("Please enter array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    printf("The elements of second array are:\n");
    for(i=0;i<size;i++)
    {
        printf("Value inside arrayb[%d]=%d\n",i,b[i]);
    }
    return 0;
}