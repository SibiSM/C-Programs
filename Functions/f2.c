#include<stdio.h>
void sum(int a,int b,int c)
{
    printf("%d",a+b+c);
}
void sum(int a,int b)
{
    printf("%d",a+b);
}
int main()
{
    int a=3,b=2,c=1;
    sum(a,b,c);
}
