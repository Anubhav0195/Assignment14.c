#include<stdio.h>
int main()
{
    int a[5],i,smallest,secsmallest;
    printf("Enter the elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<smallest)
        {
            secsmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]<secsmallest && a[i]!=smallest)
        {
            secsmallest=a[i];
        }
    }
    printf("The smallest number is %d\n",smallest);
    printf("The secsmallest number is %d\n",secsmallest);
    return 0;
}