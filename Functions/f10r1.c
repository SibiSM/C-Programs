#include<stdio.h>
int sum_ofnumbers(int a[],int n)
{
    if(n<=0)
        return 0;
    return (sum_ofnumbers(a,n-1))+a[n-1];
}
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum;
    sum=sum_ofnumbers(a,n);
    printf("%d",sum);
}
