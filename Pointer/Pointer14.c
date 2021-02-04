#include<stdio.h>
void main()
{
    int arr[5]={1,4,7,9,3};
    int (*parr)[5];
    parr=&arr;
    for(int i=0;i<5;i++)
        printf("%d %d %d\n",sizeof(parr),sizeof(*parr),sizeof(**parr));
    int (*a)[5];
    int *b[5];
    a=&arr;
    for(int i=0;i<5;i++)
        b[i]=&arr[i];
    for(int i=0;i<4;i++)
        printf("%d ",(*a)[i]);
    for(int i=0;i<4;i++)
        printf("%d ",* b[i]);
}
