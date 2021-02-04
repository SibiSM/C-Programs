#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,x,c,res=0;
    printf("Enter polynomial highest degree\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter values for degree");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter constant value");
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        printf("%dx^%d+",a[i],n-i);
    }
    printf("%d",c);
    printf("\nEnter x value");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        res=res+(a[i]*pow(x,n-i));
    }
    printf("\n%d",res+c);
}
