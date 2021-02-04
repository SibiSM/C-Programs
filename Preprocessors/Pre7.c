#include<stdio.h>
#define CONCAT(a,b) a##b
#define PRINT(str) puts(#str)
#define SUM(a,b) a+b
#define SQUARE(SUM) a*a
void main()
{
    int a=5,b=7,z;
    printf("Concatenation is:%d\n",CONCAT(6,7));
    PRINT("Sibi");
    printf("\nNested calls");
    z=SQUARE(SUM(3,2));
    printf("Sum of 3,2 and its square is %d\n",z);
}
