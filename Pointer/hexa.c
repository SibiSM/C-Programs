#include<stdio.h>
char a[15]={'0','1','2','3','4','5','6','7','8','A','B','C','D','E','F'};
static char b[100];
static int k=0;
int hexa(int n)
{
    while(n>0)
    {
        int t=hexa(n/16);
        b[k++]=a[n%16];
        n=t;
    }
    return n;
}
void main()
{
    float x,num=0,n1=0;
    int k,g;
    printf("Enter a number to convert into hexa decimal\n");
    scanf("%f",&x);
    int i=0;
    n1=(int)x;
    x=x-n1;
    while(i<6)
    {
        x=x*16;
        num+=(int)x;
        x=x-num;
        i++;
    }
    k=n1;g=num;
   int z=hexa(k);
    printf("%s",b);
   printf(".%d",g);
}
