#include<stdio.h>
#define set(a,k) a|1<<k-1
#define reset(a,k) a&~(1<<k-1)
#define flip(a,k) a^1<<k-1
#define query(a,k) 1>>(a&(1<<k-1))
void main()
{
    int a=10,k=2;
   printf("%d=Set\n",set(a,k));
   printf("%d=Reset\n",reset(a,k));
   printf("%d=Flip\n",flip(a,k));
    printf("%d=Query\n",query(a,k));
}
