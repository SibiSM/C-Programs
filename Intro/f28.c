#include<stdio.h>
void main()
{
    int x1,x2,y1,y2,c1,c2;
    printf("Enter value for x y and constant for linear equation 1:\n");
    scanf("%d %d %d",&x1,&y1,&c1);
     printf("Enter value for x y and constant for linear equation 1:\n");
    scanf("%d %d %d",&x2,&y2,&c2);
    printf("%dx+%dy=%d\n",x1,y1,c1);
    printf("%dx+%dy=%d",x2,y2,c2);
    printf("\nTHe result equation is \n %dx+%dy=%d",x1+x2,y1+y2,c1+c2);
}
