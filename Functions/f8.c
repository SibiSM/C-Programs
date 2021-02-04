#include<stdio.h>
void pass_by_value(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
void pass_by_ref(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    pass_by_value(a,b);
    printf("%d %d",a,b);
    pass_by_ref(&a,&b);
     printf("\n%d %d",a,b);
}
