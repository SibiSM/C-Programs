#include<stdio.h>
int gcd(int n,int m)
{
    while(n!=m)
    {
        if(n>m)
            return (n-m,m);
        else
            return (n,m-n);
    }
    return n;
}
void main()
{
    int n,m;
    printf("Enter two numbers for gcd");
    scanf("%d %d",&n,&m);
    int res;
    res=gcd(n,m);
    printf("%d",res);
}
