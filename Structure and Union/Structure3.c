#include<stdio.h>
typedef struct Box
{
    int len;
    int breadth;
    int height;
    int area;
}box;
int func(box b)
{
    return b.len*b.height*b.breadth;
}
int func1(box *p)
{
    return p->len*p->height*p->breadth;
}
void main()
{
    box b,*p,c;
    b.len=4;
    b.breadth=5;
    b.height=6;
    c.len=2;
    c.breadth=2;
    c.height=2;
    b.area=func(b);
    p=&c;
    c.area=func1(p);
    printf("Using normal:%d\n",b.area);
    printf("Using pointer:%d",p->area);

}
