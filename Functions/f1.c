#include<stdio.h>
//declaration
int sum(int,int);
void main()
{
    int a=5,b=4;
    //Calling
    int res;
    res=sum(a,b);
    printf("%d",res);
}
int sum(int a,int b)
{
    return a+b;
}
