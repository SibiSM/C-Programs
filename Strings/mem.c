#include<stdio.h>
#include<string.h>
void main()
{
    char a[20]="hello",b[20]="world",des[20];
    memcpy(des,a,5);
    memcpy(a,b,5);
    memcpy(b,des,5);
    printf("%s %s %s",des,a,b);
}
