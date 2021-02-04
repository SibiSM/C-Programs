#include<stdio.h>
#define sum(a,b) a+b
#define square(a) a*a
#define big(a,b) a>b?a:b
#define siz(c) (sizeof(c)/sizeof(c[0]))
#define count(a) sizeof(a[0])/sizeof(*a[0])
void main()
{
   int a=9,b=4;
   printf("Sum of %d ,%d =%d\n",a,b,sum(a,b));
   printf("Squre root of a %d is %d\n",a,square(a));
   printf("Biggest of a=%d and b=%d is %d\n",a,b,big(a,b));
   int c[4]={1,4,3,2};
   printf("Length of 1d array %d\n",siz(c));
   int arr[3][2]={{5,2},{4,3},{3,4}};
   printf(" %d=Column %d=Row",count(arr),siz(arr));

}
