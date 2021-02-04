#include<stdio.h>
typedef struct stud
{
    int a;
    char b;
}st;
void main()
{
  st s;
  s.a=7;
  s.b='A';
  printf("%d %c",s.a,s.b);
}
