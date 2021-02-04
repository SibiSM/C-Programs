#include <stdarg.h>
#include <stdio.h>
int vsum(int n, ... )
{
    va_list a;
    int sum=0;
    va_start(a,n);
    for (int x=0;x<n;x++)
    {
    sum=sum+va_arg(a,int);
    }
    va_end(a);
    return sum;
}
void miniprintf(const char *b,int n,...)
{
    printf("\n%s\n",b);
    va_list a;
    va_start(a,n);
    for (int x=0;x<n;x++)
    {
    printf("%d ",va_arg(a,int));
    }
   // va_end(a);
}
void main()
{
    printf("Sum of elements %d",vsum(4,5,6,7,9));
    miniprintf("HI",2,99,77);
}
