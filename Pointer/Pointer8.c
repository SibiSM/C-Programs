#include<stdio.h>
void main()
{
    int a[5]={10,20,30,40,50};
    int *p=a, *q=*(&a+1)-1;
    printf("%d %d\n",*p,*q);
    printf("%d %d %d %d\n",*p++, *++p, (*p)++, ++(*p));
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n%d %d %d\n",++*p, *(p++), *(++p));
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n%d %d %d %d\n",*q--, *--q, (*q)--, --(*q));
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n%d %d %d",--*q,*(q--),*(--q));
}
