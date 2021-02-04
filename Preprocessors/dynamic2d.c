#include<stdio.h>
#include<stdlib.h>
void main()
{
    int row1,col1,x,row2,col2;
    scanf("%d",&row1);
    scanf("%d",&col1);
    int **ptr=(int**)calloc(row1,sizeof(int *));
    for(int i=0;i<row1;i++)
    {
        ptr[i]=(int*)calloc(col1,sizeof(int));
    }
    printf("Enter elements of array:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;i++)
        {
            ptr[i][j]=i+j;

        }
    }
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;i++)
        {
            printf("%d ",ptr[i][j]);
        }
    }
    scanf("%d",&row2);
    scanf("%d",&col2);
    int **ptr1=(int**)malloc(row2*sizeof(int *));
    for(int i=0;i<row2;i++)
    {
        ptr1[i]=(int*)malloc(col2*sizeof(int));
    }
    printf("Enter elements of array:\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;i++)
        {
            ptr1[i][j]=i+j;

        }
    }
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;i++)
        {
            printf("%d ",ptr1[i][j]);
        }
    }
}
