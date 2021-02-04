#include<stdio.h>
void main()
{
    void *p,*q;
    int a=4,b=6;
    p=&a;
    q=&b;
    void *r;
    char c='t';
    r=&c;
    printf("%d %d",*(int*)p,*(int*)q);
    printf("%c",*(char*)r);
    printf("\nArithmetic Operators\n Sum=%d",*(int*)p+*(int*)q);
}
