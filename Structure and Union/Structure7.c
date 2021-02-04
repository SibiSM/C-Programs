#include<stdio.h>
struct A
{
int x;
char *str;
};
void main()
{
struct A a={1,"Sibi"};
printf("%d %s\n",a.x,a.str);
struct A b,c,d;
b.x=2;
b.str="Raj";
d=b;
printf("%d %s",b.x,b.str);
//scanf("%d %s\n",&c.x,c.str);
printf("%d %s",d.x,d.str);
}
