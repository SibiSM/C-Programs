#include<stdio.h>
struct box
{
    int a;
    int b;
    int c;
};
struct box create_cube(int s)
{
struct box b1={s,s,s};
return b1;
};
void main()
{
   struct box b;
   b=create_cube(4);
   printf("%d %d %d\n",b.a,b.b,b.c);

}
