#include<stdio.h>
void main()
{
   const int x=10;
   const int *p;
   p = &x;
   *p=20;
    printf("%d\n",x);
}
