#include<stdio.h>
#include<string.h>
#include<limits.h>
typedef struct emp
{
    int empid;
    char ename[20];
    int sal;
    int year;
}et;
void findser(et e[])
{
    int mser=INT_MAX,maser=INT_MIN;
   for(int i=0;i<3;i++)
   {
       if(mser>e[i].year)
            mser=e[i].year;
       if(maser<e[i].year)
            maser=e[i].year;
   }
   printf("Max serive=%d Min service=%d\n",2020-mser,2020-maser);
}
void main()
{
   et e[3];
   int a[3]={1,2,3};
   char b[3][10]={"Sibi","Raja","Mohan"};
   int s[3]={40000,30000,60000};
   int y[3]={2008,2007,2012};
   int mi=INT_MAX,ma=INT_MIN,tot=0;
   for(int i=0;i<3;i++)
   {
       e[i].empid=a[i];
       strcpy(e[i].ename,b[i]);
       e[i].sal=s[i];
       e[i].year=y[i];
       if(mi>e[i].sal)
            mi=e[i].sal;
       if(ma<e[i].sal)
            ma=e[i].sal;
        tot=tot+e[i].sal;
   }
   for(int i=0;i<3;i++)
   {
       printf("%d %s %d %d\n",e[i].empid,e[i].ename,e[i].sal,e[i].year);
   }
   printf("Min=%d Max=%d total=%d avg=%.2f\n",mi,ma,tot,(float)tot/3);
   findser(e);
}
