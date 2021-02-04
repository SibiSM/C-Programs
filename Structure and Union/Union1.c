#include<stdio.h>
#include<stddef.h>
union A
{
    int x;
    int y;
    char ch;
};
void main()
{
union A a1;
a1.x=0x10;
a1.y=0x1121;
printf("%d %d\n",a1.x,a1.y);
printf("size=%d\n offsetof x=%d \noffsetof y=%d \n ch =%d\n",sizeof(a1),offsetof(union A,x),offsetof(union A,y),offsetof(union A,ch));
}
