#include<stdio.h>
union A
{
    int x;
    float y;
    double z;
    int arr[2];
}a1;
union B
{
      char ch;
          char carr[2];
    int x;
}b1;
void main()
{
    a1.x=6.2;
    printf("x=%d\n",a1.x);
    a1.z=5;
    printf("%d %d \n",a1.arr[1],a1.arr[0]);
    b1.ch='e';
    b1.carr[1]='s';
    b1.carr[2]='s';
    printf("%c %c %c\n",b1.ch,b1.carr[0],b1.carr[1]);
    b1.carr[1]='c';
    b1.ch='i';
    printf("%c %c %c\n",b1.ch,b1.carr[0],b1.carr[1]);
}
