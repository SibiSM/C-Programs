#include<stdio.h>
void main()
{
int arr[3][2]={{1,2},{3,4},{5,6}};
int (*p)[2];
int (*q)[3][2];
p=arr;
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
    printf("%d %d %d#\n",sizeof(p),sizeof(*p),sizeof(**p));
  //  printf("%d %d %d\
             n",arr[i][j],(*(p+i))[j],*(*(p+i)+j));
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
    printf("%d %d %d %d*    \n",sizeof(q),sizeof(*q),sizeof(**q),sizeof(***q));
  //  printf("%d %d %d\n",arr[i][j],(*(p+i))[j],*(*(p+i)+j));
    }
}
}
