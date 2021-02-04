#include<stdio.h>
void main()
{
    int *p,a=5,*p1,*p2;
    p=&a;
    printf("%d %d\n",*p,p);
    p1=p+1;
    p2=p-1;
    printf("%d %d\n",*p,p);
    printf("%d %d %d",p1,p2,p1-p2);
}
