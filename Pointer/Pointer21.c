#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main()
{
    int a[10],p;
    for(int i=0;i<10;i++)
    {
        int k=rand()%10;
        a[i]=k;
    }
    for(int i=0;i<10;i++)
     {
         printf("%d ",a[i]);
     }
     printf("The array contains element from 1 to 10\n Enter a number from 1 to 10 find elements is present or not\n");
     scanf("%d",&p);
     bool che=false;
     for(int i=0;i<10;i++)
     {
         if(a[i]==p)
                che=true;
     }
     if(che)
        printf("Element is present\n");
     else
        printf("Element is not present");
}
