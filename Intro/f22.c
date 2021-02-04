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
void dec_hexa(int n)
{
    if(n==0)
    {
        return ;
    }
    else{
        dec_hexa(n/16);
        printf("%d",n%16);
    }
}
int main()
{
    int n,res;
    scanf("%d",&n);
    dec_binary(n);
    printf("\n");
    dec_octal(n);
    printf("\n");
    dec_hexa(n);
}
