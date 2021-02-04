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
     printf("\nTrace Matrix is:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==j)
                k=k+a[i][j];
        }
    }
    printf("%d",k);
}
