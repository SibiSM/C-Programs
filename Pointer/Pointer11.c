#include<stdio.h>
void main()
{
    int a[4]={7,2,9,4};
    int *ptr[4];
    ptr=&a[0];
    for(int i=0;i<4;i++)
        printf("%d %d %d\n",*(ptr+i),i[a],a[i]);
    int (*p)[4];
}
