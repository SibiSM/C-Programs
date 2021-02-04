#include<stdio.h>
int main()
{
    int a,b,c;
    printf("With temp variable \n Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Numbers %d %d",a,b);
    printf("\n\tWithout temp variable\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers %d %d",a,b);
    printf("\n\tUsing Xor operation");
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Numbers %d %d",a,b);
}
