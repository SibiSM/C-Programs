#include<stdio.h>
void main()
{
    int *p,x=5;
    char *a,y='a';
    float *b,o=4.6;
    p=&x;
    a=&y;
    b=&o;
    printf("%d\n",*p);
    printf("%c\n",*a);
    printf("%.2f\n",*b);
}
