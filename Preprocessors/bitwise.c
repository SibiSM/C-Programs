#include<stdio.h>
void main()
{
    int a=10,k=1;
    printf("%d =Set\n",a|1<<k-1);
     printf("%d=Reset",a&~(1<<k-1));
    printf("%d=Flip",(a^(1<<k-1)));
   printf("%d=Query",1>>(1<<k & a));
}
