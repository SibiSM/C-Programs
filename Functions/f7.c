#include<stdio.h>
int var=5;
void main()
{
    {
        int var=10;
        printf("%d\n",var);
    }
    printf("%d",var);
}
