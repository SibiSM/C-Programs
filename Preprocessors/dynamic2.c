#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,n,i;
    printf("Enter n no of elements for array");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter array elements");
    for(int i=0;i<n;i++)
        scanf("%d",(ptr+i));
    printf("Array elements are:");
    for(int i=0;i<n;i++)
        printf("%d ",*(ptr+i));
    free(ptr);
}
