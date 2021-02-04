#include<stdio.h>
void main()
{
    int a[2][2]={{9,6},{2,8}},i,j,k;
    printf("Matrix 1:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<2;j++)
        {
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    printf("Transpose Matrix 1:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
