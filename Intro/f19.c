#include<stdio.h>
void swaping(int a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
void main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
       printf("\n");
    swaping(a,5);
}
