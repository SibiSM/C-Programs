#include<stdio.h>
#include<ctype.h>
int absou(float a)
    {
    return (int)a;
    }
int sum(int a,int b)
    {
    return a+b;
    }
void main()
{
    int res;
    res=sum(2,absou(3.4));
    printf("%d",res);
}
