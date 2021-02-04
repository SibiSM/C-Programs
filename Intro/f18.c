#include<stdio.h>
#include<limits.h>
void main()
{
    int a[5]={-999,-99999,7,444,87};
    int mi=INT_MAX,ma=INT_MIN,i;
    for(i=0;i<5;i++)
    {
        if(a[i]>ma)
            ma=a[i];
        if(a[i]<mi)
            mi=a[i];
    }
    printf("MIN=%d \nMAX=%d",mi,ma);
}

