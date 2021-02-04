#include<stdio.h>
int fact(int n)
{
    static int c;
    if(n>0)
    {
        c++;
        printf("%d",c);
        return n*fact(n-1);
    }
    return 1;
}
void main()
{
    int n,res;
    scanf("%d",&n);
    res=fact(n);
   // printf("\n%d",res);
}
