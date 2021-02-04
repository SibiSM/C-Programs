#include<stdio.h>
struct stur
{
    int sum;
    int pro;
};
struct stur simple(int n,int m,struct stur s)
{
    s.sum=n+m;
    s.pro=n*m;
   return s;
}
int main()
{
    struct stur s;
    s.sum=0;
    s.pro=0;
    int n,m;
    scanf("%d %d",&n,&m);
    s=simple(n,m,s);
    printf("%d %d",s.sum,s.pro);
}
