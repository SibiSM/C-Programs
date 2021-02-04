#include<stdio.h>
#include<stdbool.h>
#define N 3
bool print(int a[][N])
{
    for(int i=0;i<N;i++)
       {
        for(int j=0;j<N;j++)
        {
           if((a[i][j]!=0))
                return false;
        }
       }
       return true;

}
void main()
{
    int a[N][N]={{0,0,0},
                {0,0,0},
                {0,0,1}};
    bool k=print(a);
    if(k)
        printf("Is a null matrix:");
    else
        printf("Not a null  matrix");

}

