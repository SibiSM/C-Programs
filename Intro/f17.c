#include<stdio.h>
void main()
{
    int i,a[5]={9,6,7,3,4};
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int s=0;
    float avg;
    for(i=0;i<5;i++)
        s+=a[i];
    avg=(float)s/5;
    printf("sum=%d\naverage=%6.2f",s,avg);
}
