#include<stdio.h>
void main()
{
    int x=1,y=5,z;
z=++x && ++y;
printf("%d\n",z);
 x=1;y=5;
z=--x && --y;
printf("%d\n",z);
z=++x || ++y;
printf("%d\n",z);
x=1;y=5;
z=--x || --y;
printf("%d\n",z);
}
