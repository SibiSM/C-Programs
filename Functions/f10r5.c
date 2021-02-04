#include<stdio.h>
int dec_binary(int n)
{
    if(n>0)
    {
        int r;
        r=dec_binary(n/2);
        printf("%d",n%2);
        return r;
    }
}
void dec_octal(int n)
{
    if(n==0)
    {
        return ;
    }
    else{
        dec_octal(n/8);
        printf("%d",n%8);
    }
}
int main()
{
    int n,res;
    scanf("%d",&n);
    dec_binary(n);
    printf("\n");
    dec_octal(n);
}
