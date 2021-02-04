#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},b[5]={10,9,8,7,6,};
    int c[5],i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d  ",c[i]);
    }
    printf("\n");
}
