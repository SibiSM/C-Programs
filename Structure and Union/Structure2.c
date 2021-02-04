#include<stdio.h>
struct a
{
int x;
char str[5];
double y;
}s1;
struct b
{
int x;
char str[5];
double y;
}s2;
void main()
{
    printf("%d %d %d ",sizeof(s1),sizeof(s2),sizeof(s1)-sizeof(s2));
    printf("Padding bytes is extra of all of these bytes\n");
    printf("%d %d %d %d\n original-structure=%d padding",sizeof(s1.x),sizeof(s1.str),sizeof(s1.y),sizeof(s1),sizeof(s1.x)+sizeof(s1.str)+sizeof(s1.y)-sizeof(s1));
}
