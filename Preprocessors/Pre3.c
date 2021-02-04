#include<stdio.h>
#define max 85
#define min 45
void main()
{
    #if max<75
        printf("65 is smaller");
    #elif max>75
        printf("75 is greater");
    #else
        printf("75 is equal");
    #endif // max
    #ifdef min
        printf("Min is defined");
    #else
        printf("Min is not defined");
    #endif // min
}
