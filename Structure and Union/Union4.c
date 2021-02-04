#include<stdio.h>
typedef union stud
{
    union
    {
    char c;
    int a;
    };
}st;
void main()
{
    st s;
    s.c='a';
    s.a=65;
    printf("%c %d",s.c,s.a);
}
