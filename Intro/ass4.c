#include<stdio.h>
void main()
{
    int n,rev=0;
    printf("Enter a four digit number");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("\n%d is the reversed number",rev);
}
