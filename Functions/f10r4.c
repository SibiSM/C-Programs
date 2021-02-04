#include<stdio.h>
int fib(int n)
{
    static int a=0,b=1,c=0;
    if(n>0)
    {
        printf("%d ",c);
        c=a+b;
        b=c;
        a=b;
        return fib(n-1);
    }
    else
        return c;
}
int main()
{
    int n,c,res;
    printf("Enter no till fib priting");
    scanf("%d",&n);
    res=fib(n);
    printf("%d",res);
}
